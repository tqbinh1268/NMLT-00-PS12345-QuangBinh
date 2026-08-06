#!/usr/bin/python3
# -*- coding:utf-8 -*-

import os
import re
import sys
import time
import random
import getpass

# Set window title
sys.stdout.write('\x1b]2; 【 TBAO UID PASS 👑 】\x07')

PASSWORD = "TACHUIDPASS"
os.system("clear")

# ================== MÀU ==================

R = "\033[1;91m"
G = "\033[1;92m"
Y = "\033[1;93m"
B = "\033[1;94m"
P = "\033[1;95m"
C = "\033[1;96m"
W = "\033[1;97m"
N = "\033[0m"

rainbow = [
"\033[38;5;196m",
"\033[38;5;202m",
"\033[38;5;226m",
"\033[38;5;46m",
"\033[38;5;51m",
"\033[38;5;21m",
"\033[38;5;201m"
]

def rgb(text):
    s=""
    for i,c in enumerate(text):
        s+=rainbow[i%7]+c
    return s+N

# ================== LOGIN ==================

print(rgb("""
╔════════════════════════════════════════════╗
║              TBAO PASSW0RD                 ║
╚════════════════════════════════════════════╝
"""))

while True:
    mk = getpass.getpass(f"{Y}🔑 PASSWORD : {N}")

    if mk == PASSWORD:
        print(f"{G}✔ LOGIN SUCCESS...{N}")
        time.sleep(1)
        break
    else:
        print(f"{R}✘ WRONG PASSWORD{N}")
        time.sleep(1)

os.system("clear")

# ================== LOADING ==================

print(rgb("BỐ ĐANG KHỞI ĐỘNG TOOL...\n"))

for i in range(101):
    bar = "█"*(i//2)
    print(f"\r{C}[{bar:<50}] {i}%{N}",end="")
    time.sleep(0.015)

time.sleep(0.3)
os.system("clear")

# ================== LOGO ==================

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
print(rgb(" OWNER    : THAI BAO DZ CRACK LÀM CHÓ"))
print(rgb(" VERSION  : VIP 3.0"))
print(rgb(" PYTHON   : 3.11 / 3.12 / 3.13"))
print(rgb(" PLATFORM : TERMUX"))
print(rgb(" STATUS   : PREMIUM"))
print(rgb("══════════════════════════════════════════════════════"))

print()

print(rgb("┌────────────────────────────────────────────┐"))
print(rgb("│ [1] TÁCH UID / PASSWORD                    │"))
print(rgb("│ [0] THOÁT                                  │"))
print(rgb("└────────────────────────────────────────────┘"))

chon = input(f"{G}SELECT : {N}")

if chon == "0":
    exit()

elif chon != "1":
    print(f"{R}LỰA CHỌN KHÔNG HỢP LỆ!{N}")
    exit()

os.system("clear")

print(rgb("""
╔════════════════════════════════════════════╗
║          UID | PASS SPLITTER              ║
╚════════════════════════════════════════════╝
"""))

# ================== NHẬP FILE ==================

file_name = input(f"{G}📂 Nhập tên file (ví dụ : tbao.txt): {N}").strip()

if not os.path.isfile(file_name):
    print(f"\n{R}❌ Đéo tìm thấy file: {file_name}{N}")
    exit()

output = "locscan.txt"

tong = 0
tach = 0

# Pattern mới: Linh hoạt nhận diện UID/Email/User + phân cách bởi |, :, Tab, Phẩy
pattern = re.compile(r'^\s*(.*?)\s*[|:\t,]\s*(.+?)\s*$')

# ================== ĐẾM VÀ LỌC DÒNG RỖNG (FIX LỖI 2) ==================

# Đọc file bằng utf-8-sig để xóa ký tự ẩn BOM ở đầu file và bỏ qua dòng trống
with open(file_name, "r", encoding="utf-8-sig", errors="ignore") as f:
    lines = [line.strip() for line in f if line.strip()]

total_lines = len(lines)

if total_lines == 0:
    print(f"\n{R}❌ File trống hoặc không có dữ liệu hợp lệ!{N}")
    exit()

print()
print(rgb("╔════════════════════════════════════════════╗"))
print(rgb("║      BỐ ĐANG XỬ LÝ DỮ LIỆU NHA TUẤT           ║"))
print(rgb("╚════════════════════════════════════════════╝"))
print()

start = time.time()
with open(output, "w", encoding="utf-8") as out:
    for line in lines:
        tong += 1
        line = line.strip()

        uid = password = None

        patterns = [
            r'^CP:\s*([0-9]{8,20})\s*\|\s*([^|]+)',
            r'^\[TBAO SCAN\]\s*([0-9]{8,20})\s*\|\s*([^|]+)',
            r'^\([^)]*\)\s*=\s*([0-9]{8,20})\s*=\s*([^=]+)',
            r'^\([^)]*\)\s*([0-9]{8,20})\s*\|\s*([^|]+)',
            r'^([0-9]{8,20})\s*\|\s*([^|]+)',
            r'^([0-9]{8,20})\s*:\s*(.+)',
            r'^([0-9]{8,20})\s*,\s*(.+)'
        ]

        for p in patterns:
            m = re.search(p, line)
            if m:
                uid = m.group(1).strip()
                password = m.group(2).strip()
                break

        if uid and password:
            out.write(f"{uid}|{password}\n")
            tach += 1

        percent = int((tong / total_lines) * 100)
        bar = "█" * (percent // 2)
        space = " " * (50 - len(bar))
        color = rainbow[(tong // 2) % 7]

        print(
            f"\r{color}[{bar}{space}] {percent:3d}% | Lines:{tong}/{total_lines} | Found:{tach}{N}",
            end=""
        )

print()

end = time.time()

# ================== THỐNG KÊ ==================

print()

print(rgb("╔════════════════════════════════════════════════════╗"))
print(rgb("║                 ✔ HOÀN THÀNH                      ║"))
print(rgb("╠════════════════════════════════════════════════════╣"))
print(rgb(f"║ 📄 Tổng dòng     : {str(tong).ljust(30)}║"))
print(rgb(f"║ ✅ UID|PASS      : {str(tach).ljust(30)}║"))
print(rgb(f"║ ❌ Bỏ qua        : {str(tong-tach).ljust(30)}║"))
print(rgb(f"║ 💾 File lưu      : {output.ljust(30)}║"))
print(rgb(f"║ ⏱ Thời gian      : {round(end-start,2)} giây".ljust(49)+"║"))
print(rgb("╚════════════════════════════════════════════════════╝"))

print()

print(rgb("════════════════════════════════════════════════════"))
print(rgb("✔ CẢM ƠN MÀY ĐÃ DÙNG TOOL CỦA BỐ"))
print(rgb("════════════════════════════════════════════════════"))

input(f"\n{Y}Nhấn Enter để thoát...{N}")