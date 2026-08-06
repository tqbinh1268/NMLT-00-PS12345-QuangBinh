#!/usr/bin/python3
# -*- coding:utf-8 -*-

import os
import re
import sys
import time
import signal
import getpass

# Thêm handler xử lý khi người dùng ấn Ctrl+C
def signal_handler(sig, frame):
    print(f"\n\033[1;91m\n[!] Đã hủy thao tác bởi người dùng.\033[0m")
    sys.exit(0)

signal.signal(signal.SIGINT, signal_handler)

# Cấu hình cửa sổ
sys.stdout.write('\x1b]2; 【 TBAO UID PASS 👑 】\x07')

PASSWORD = "TACHUIDPASS"

# ================== MÀU SẮC ==================
R = "\033[1;91m"
G = "\033[1;92m"
Y = "\033[1;93m"
B = "\033[1;94m"
P = "\033[1;95m"
C = "\033[1;96m"
W = "\033[1;97m"
N = "\033[0m"

RAINBOW = [
    "\033[38;5;196m", "\033[38;5;202m", "\033[38;5;226m",
    "\033[38;5;46m",  "\033[38;5;51m",  "\033[38;5;21m",  "\033[38;5;201m"
]

def rgb(text):
    """Tạo hiệu ứng chữ 7 màu"""
    return "".join(RAINBOW[i % 7] + c for i, c in enumerate(text)) + N

def clear_screen():
    os.system("cls" if os.name == "nt" else "clear")

# ================== REGEX MASTER (TỐI ƯU) ==================
# Gom tất cả các trường hợp nhận diện UID (8-20 chữ số) + Mật khẩu
MASTER_PATTERN = re.compile(
    r'(?:CP:|\[TBAO SCAN\]|\([^)]*\)\s*=\s*|\([^)]*\)\s*)?'  # Tiền tố vô ích (nếu có)
    r'([0-9]{8,20})'                                         # Group 1: UID
    r'\s*[:|,\t=]\s*'                                        # Dấu phân cách
    r'(.+)'                                                 # Group 2: Password
)

def parse_line(line):
    """Bóc tách UID và Password từ 1 dòng văn bản"""
    line = line.strip()
    if not line:
        return None, None
    
    match = MASTER_PATTERN.search(line)
    if match:
        uid = match.group(1).strip()
        password = match.group(2).strip()
        if uid and password:
            return uid, password
            
    return None, None

# ================== LOGIN ==================
clear_screen()
print(rgb("""
╔════════════════════════════════════════════╗
║              TBAO PASSW0RD                 ║
╚════════════════════════════════════════════╝
"""))

while True:
    mk = getpass.getpass(f"{Y}🔑 PASSWORD : {N}")
    if mk == PASSWORD:
        print(f"{G}✔ LOGIN SUCCESS...{N}")
        time.sleep(0.8)
        break
    print(f"{R}✘ WRONG PASSWORD{N}")

clear_screen()

# ================== LOADING ==================
print(rgb("BỐ ĐANG KHỞI ĐỘNG TOOL...\n"))
for i in range(101):
    bar = "█" * (i // 2)
    print(f"\r{C}[{bar:<50}] {i}%{N}", end="", flush=True)
    time.sleep(0.008)

time.sleep(0.2)
clear_screen()

# ================== MAIN MENU ==================
logo = """
 ████████╗██████╗  █████╗  ██████╗
 ╚══██╔══╝██╔══██╗██╔══██╗██╔═══██╗
    ██║   ██████╔╝███████║██║   ██║
    ██║   ██╔══██╗██╔══██║██║   ██║
    ██║   ██████╔╝██║  ██║╚██████╔╝
    ╚═╝   ╚═════╝ ╚═╝  ╚═╝ ╚═════╝
"""

print(rgb(logo))
print(rgb("══════════════════════════════════════════════════════"))
print(rgb(" OWNER    : THAI BAO DZ"))
print(rgb(" VERSION  : VIP 3.0 (OPTIMIZED)"))
print(rgb(" PLATFORM : TERMUX / PYTHON 3.x"))
print(rgb(" STATUS   : PREMIUM"))
print(rgb("══════════════════════════════════════════════════════"))
print()
print(rgb("┌────────────────────────────────────────────┐"))
print(rgb("│ [1] TÁCH UID / PASSWORD                    │"))
print(rgb("│ [0] THOÁT                                  │"))
print(rgb("└────────────────────────────────────────────┘"))

chon = input(f"{G}SELECT : {N}").strip()

if chon == "0":
    sys.exit(0)
elif chon != "1":
    print(f"{R}LỰA CHỌN KHÔNG HỢP LỆ!{N}")
    sys.exit(1)

clear_screen()

print(rgb("""
╔════════════════════════════════════════════╗
║          UID | PASS SPLITTER              ║
╚════════════════════════════════════════════╝
"""))

# ================== NHẬP VÀ XỬ LÝ FILE ==================
file_name = input(f"{G}📂 Nhập tên file (ví dụ : tbao.txt): {N}").strip()

if not os.path.isfile(file_name):
    print(f"\n{R}❌ Đéo tìm thấy file: {file_name}{N}")
    sys.exit(1)

output_file = "locscan.txt"

print(f"\n{C}[*] Đang đọc cấu trúc dữ liệu...{N}")

# Đọc toàn bộ các dòng hợp lệ vào RAM
with open(file_name, "r", encoding="utf-8-sig", errors="ignore") as f:
    lines = [line for line in (l.strip() for l in f) if line]

total_lines = len(lines)

if total_lines == 0:
    print(f"\n{R}❌ File trống hoặc không có dữ liệu hợp lệ!{N}")
    sys.exit(1)

print()
print(rgb("╔════════════════════════════════════════════╗"))
print(rgb("║      BỐ ĐANG XỬ LÝ DỮ LIỆU NHA TUẤT           ║"))
print(rgb("╚════════════════════════════════════════════╝"))
print()

start_time = time.time()
found_count = 0
last_update_time = 0

with open(output_file, "w", encoding="utf-8") as out:
    for idx, line in enumerate(lines, 1):
        uid, password = parse_line(line)
        
        if uid and password:
            out.write(f"{uid}|{password}\n")
            found_count += 1

        # Tối ưu giao diện: Chỉ cập nhật terminal mỗi 0.05 giây hoặc ở dòng cuối cùng
        # Tránh ghi log quá nhanh làm lag terminal trên Android/Termux
        current_time = time.time()
        if (current_time - last_update_time > 0.05) or (idx == total_lines):
            percent = int((idx / total_lines) * 100)
            bar_len = percent // 2
            bar = "█" * bar_len
            space = " " * (50 - bar_len)
            color = RAINBOW[(idx // 10) % 7]

            print(
                f"\r{color}[{bar}{space}] {percent:3d}% | Lines:{idx}/{total_lines} | Found:{found_count}{N}",
                end="",
                flush=True
            )
            last_update_time = current_time

print("\n")
end_time = time.time()

# ================== THỐNG KÊ ==================
execution_time = round(end_time - start_time, 2)
ignored_count = total_lines - found_count

print(rgb("╔════════════════════════════════════════════════════╗"))
print(rgb("║                 ✔ HOÀN THÀNH                      ║"))
print(rgb("╠════════════════════════════════════════════════════╣"))
print(rgb(f"║ 📄 Tổng dòng     : {str(total_lines).ljust(30)}║"))
print(rgb(f"║ ✅ UID|PASS      : {str(found_count).ljust(30)}║"))
print(rgb(f"║ ❌ Bỏ qua        : {str(ignored_count).ljust(30)}║"))
print(rgb(f"║ 💾 File lưu      : {output_file.ljust(30)}║"))
print(rgb(f"║ ⏱ Thời gian      : {f'{execution_time} giây'.ljust(30)}║"))
print(rgb("╚════════════════════════════════════════════════════╝"))
print()

print(rgb("════════════════════════════════════════════════════"))
print(rgb("✔ CẢM ƠN MÀY ĐÃ DÙNG TOOL CỦA BỐ"))
print(rgb("════════════════════════════════════════════════════"))

input(f"\n{Y}Nhấn Enter để thoát...{N}")