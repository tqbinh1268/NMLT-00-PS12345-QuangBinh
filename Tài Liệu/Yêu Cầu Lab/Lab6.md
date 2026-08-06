BÀI THỰC HÀNH 06 (LAB 6)
🎯 MỤC TIÊU
Sau bài thực hành này, sinh viên có khả năng:
Hiểu và vận dụng thành thạo cấu trúc dữ liệu Mảng 1 chiều và Mảng 2 chiều (Ma trận) trong C.
Nắm vững các thuật toán duyệt mảng, tìm kiếm $Max/Min$, sắp xếp ($Selection/Bubble\ Sort$) và xử lý ma trận.
Tái sử dụng kỹ năng viết Hàm (Function) để mô-đun hóa các thao tác xử lý mảng.
Duy trì thói quen Atomic Commit (Commit mã nguồn theo từng hàm/chức năng hoàn thành) trên Git/GitHub.
Rèn luyện kỹ năng giải thích thuật toán mảng/chỉ số phần tử qua Vlog trải nghiệm.
🛠️ NỘI DUNG CHI TIẾT
Sinh viên tạo 01 file code đặt tên là Main_Menu_Lab6.c nằm trực tiếp trong thư mục con Lab6 (Cấu trúc Repository: STT_MSSV_Ten/Lab6/Main_Menu_Lab6.c). Mỗi bài tập xử lý mảng sẽ được viết thành một Hàm riêng biệt và gọi lại trong Menu điều khiển do-while + switch-case.
Khởi tạo & Dựng Khung Menu: HỆ THỐNG MENU XỬ LÝ MẢNG
Yêu cầu: Khai báo các Nguyên mẫu hàm (Function Prototypes) ở đầu file Main_Menu_Lab6.c. Sử dụng vòng lặp do-while và switch-case để điều khiển gọi các hàm chức năng.
Giao diện Menu hiển thị:


+---------------------------------------------------+
|             MENU CHƯƠNG TRÌNH LAB 6               |
+---------------------------------------------------+
| 1. Tính trung bình tổng số chia hết cho 3 và 5    |
| 2. Tìm giá trị Lớn nhất và Nhỏ nhất trong Mảng    |
| 3. Sắp xếp Mảng theo thứ tự Giảm dần              |
| 4. Ma trận bình phương (Mảng 2 chiều)             |
| 5. Lọc và xuất vị trí các Số lẻ trong Ma trận     |
| 6. Thoát chương trình                             |
+---------------------------------------------------+
>> Xin mời chọn chức năng (1-6): 


📌 HƯỚNG DẪN COMMIT 1: Dựng xong khung Menu và khai báo danh sách các nguyên mẫu hàm, gõ lệnh:
Bash
git add Lab6/Main_Menu_Lab6.c
git commit -m "Lab6: Dung khung Menu va khai bao cac nguyen mau ham xu ly mang"


Chức năng 1: Tính Trung bình tổng các số chia hết cho 3 và 5 (1.5 Điểm)
Yêu cầu kỹ thuật: Viết hàm void tinhTrungBinhCong(int a[], int n).
Logic xử lý:
Nhập số lượng phần tử $n$ và nhập các giá trị cho mảng 1 chiều $a[n]$ từ bàn phím.
Duyệt mảng: Kiểm tra các phần tử thỏa mãn điều kiện vừa chia hết cho 3 vừa chia hết cho 5 (a[i] % 3 == 0 && a[i] % 5 == 0).
Cộng dồn các số thỏa mãn vào tong và tăng biến đếm count.
Tính $TrungBinh = \frac{Tong}{Count}$ và xuất kết quả ra màn hình.
Bắt lỗi: Nếu count == 0 (không có số nào thỏa mãn), in thông báo không tìm thấy để tránh lỗi chia cho 0.
📌 HƯỚNG DẪN COMMIT 2: Viết xong và test thành công Chức năng 1, thực hiện lệnh:
Bash
git add Lab6/Main_Menu_Lab6.c
git commit -m "Lab6: Hoan thanh Chuc nang 1 - Tinh trung binh tong so chia het cho 3 va 5"


Chức năng 2: Tìm Giá trị Lớn nhất và Nhỏ nhất trong Mảng (1.5 Điểm)
Yêu cầu kỹ thuật: Viết hàm void timMaxMin(int a[], int n).
Logic xử lý:
Nhập mảng 1 chiều $n$ phần tử.
Khởi tạo max = a[0] và min = a[0].
Duyệt mảng từ chỉ số $i = 1$ đến $n-1$:
Nếu a[i] > max thì gán max = a[i].
Nếu a[i] < min thì gán min = a[i].
In giá trị $Max$ và $Min$ tìm được ra màn hình.
📌 HƯỚNG DẪN COMMIT 3: Viết xong và test hàm tìm Max/Min, thực hiện lệnh:
Bash
git add Lab6/Main_Menu_Lab6.c
git commit -m "Lab6: Hoan thanh Chuc nang 2 - Tim gia tri lon nhat va nho nhat trong mang"


Chức năng 3: Sắp xếp Mảng theo thứ tự Giảm dần (1.5 Điểm)
Yêu cầu kỹ thuật: Viết hàm void sapXepGiamDan(int a[], int n).
Logic xử lý:
Nhập mảng 1 chiều $n$ phần tử.
Sử dụng 2 vòng lặp lồng nhau (vòng $i$ và vòng $j$) để so sánh các cặp phần tử:
Nếu a[i] < a[j] thì thực hiện hoán vị giá trị a[i] và a[j] (dùng biến temp) để đưa phần tử lớn hơn lên trước.
Xuất mảng sau khi đã sắp xếp hoàn chỉnh theo thứ tự giảm dần kèm vị trí chỉ số a[i].
📌 HƯỚNG DẪN COMMIT 4: Viết xong và test thuật toán sắp xếp mảng, thực hiện lệnh:
Bash
git add Lab6/Main_Menu_Lab6.c
git commit -m "Lab6: Hoan thanh Chuc nang 3 - Sap xep mang theo thu tu giam dan"


Chức năng 4: Ma trận Bình phương - Mảng 2 chiều (1.5 Điểm)
Yêu cầu kỹ thuật: Viết hàm void maTranBinhPhuong(int row, int col).
Logic xử lý:
Nhập số hàng row ($n$) và số cột col ($m$) của ma trận.
Dùng 2 vòng lặp for lồng nhau để người dùng nhập từng phần tử $a[i][j]$ cho ma trận 2 chiều.
Duyệt ma trận và in ra màn hình các giá trị đã được bình phương ($a[i][j] \times a[i][j]$) theo đúng định dạng hàng/cột của ma trận.
📌 HƯỚNG DẪN COMMIT 5: Viết xong và test ma trận bình phương, thực hiện lệnh:
Bash
git add Lab6/Main_Menu_Lab6.c
git commit -m "Lab6: Hoan thanh Chuc nang 4 - Xu ly ma tran binh phuong mang 2 chieu"


Chức năng 5: Lọc và xuất vị trí các Số lẻ trong Ma trận (1.0 Điểm)
Yêu cầu kỹ thuật: Viết hàm void xuatSoLeMaTran(int row, int col).
Logic xử lý:
Nhập vào ma trận các số nguyên gồm row hàng và col cột.
Duyệt từng vị trí $[i][j]$ trong ma trận:
Nếu a[i][j] % 2 != 0 (là số lẻ), in ra màn hình giá trị kèm theo đúng vị trí hàng/cột của nó (Ví dụ: Phan tu le tai a[1][2] = 5).
📌 HƯỚNG DẪN COMMIT 6: Viết xong và test lọc số lẻ ma trận, thực hiện lệnh:
Bash
git add Lab6/Main_Menu_Lab6.c
git commit -m "Lab6: Hoan thanh Chuc nang 5 - Loc va in vi tri cac so le trong ma tran"


Bài 6: Vlog Review & Trải nghiệm Học tập (2.0 Điểm)
Vị trí lưu file: Tạo file Bai6_Review.md nằm trực tiếp trong thư mục Lab6 (Chứa link Facebook/YouTube/TikTok... video công khai).
Yêu cầu thực hiện: Sinh viên tự quay video Vlog thời lượng từ 2 đến 3 phút, bật camera/webcam ghi hình rõ nét chính chủ, âm thanh rõ ràng với cấu trúc 3 phần chuẩn Poly:
Phần 1: Mở đầu - Kết nối & Cảm nhận (Khoảng 45 giây): Chào mừng theo phong cách FPT Polytechnic, giới thiệu Họ tên, MSSV. Nêu cảm nhận cá nhân về bài học Mảng 1 chiều & Mảng 2 chiều, những điều thú vị hay các lỗi hay gặp như vượt quá chỉ số mảng (Index out of bounds).
Phần 2: Review Kỹ thuật (Khoảng 1.5 phút): Show màn hình VS Code chứa file Main_Menu_Lab6.c.
Thuyết minh chi tiết tư duy duyệt mảng 1 chiều (thuật toán sắp xếp hoặc tìm Max/Min) hoặc cách duyệt ma trận bằng 2 vòng lặp lồng nhau.
Show lịch sử các Commit (git log --oneline) trên Terminal để chứng minh bản thân đã tuân thủ việc commit theo từng hàm/chức năng.
Thực hiện thao tác sửa code trực tiếp, sau đó chạy lệnh git commit và git push origin main đẩy toàn bộ mã nguồn Lab 6 lên GitHub ngay trên màn hình video.
Phần 3: Kết thúc: Tóm tắt giá trị rút ra được và gửi lời chào tạm biệt đến giảng viên.
📌 HƯỚNG DẪN COMMIT 7 (Commit cuối cùng): Tạo file Bai6_Review.md, dán link video (Facebook/YouTube/TikTok...) vào và gõ lệnh:
Bash
git add Lab6/
git commit -m "Lab6: Hoan thanh Bai 6 - Bo sung link Vlog Review va Push toan bo len GitHub"
git push origin main


📊 TIÊU CHÍ CHẤM ĐIỂM CHI TIẾT

Bài/Chức năng
Mô tả chi tiết tiêu chí đánh giá và chấm điểm
Điểm tối đa
Menu Mô-đun
• Đặt tên file Main_Menu_Lab6.c và lưu trữ chính xác trong folder con Lab6 trên GitHub.

• Sử dụng vòng lặp do-while gọi hàm mượt mà, có khai báo nguyên mẫu hàm rõ ràng.

• Có commit riêng cho khung Menu.
1.0đ
Chức năng 1
• Tách hàm xử lý đúng logic trung bình cộng các số chia hết cho 3 và 5.

• Có xử lý bắt lỗi chia cho 0 khi không tìm thấy số thỏa mãn.

• Có commit riêng cho Chức năng 1.
1.5đ
Chức năng 2
• Tách hàm tìm đúng giá trị $Max$ và $Min$ trong mảng 1 chiều.

• Có commit riêng cho Chức năng 2.
1.5đ
Chức năng 3
• Xây dựng đúng thuật toán hoán vị sắp xếp mảng giảm dần.

• In ra chính xác chỉ số phần tử và giá trị sau khi sắp xếp.

• Có commit riêng cho Chức năng 3.
1.5đ
Chức năng 4
• Khai báo và nhập/xuất chuẩn xác mảng 2 chiều (ma trận).

• Tính và in ra chuẩn ma trận bình phương theo đúng định dạng hàng/cột.

• Có commit riêng cho Chức năng 4.
1.5đ
Chức năng 5
• Lọc và in ra đúng giá trị cùng vị trí $[i][j]$ các số lẻ trong ma trận.

• Có commit riêng cho Chức năng 5.
1.0đ
Bài 6 (Vlog)
• Vlog chuẩn Poly: Video thu hình rõ nét, quay trực diện khuôn mặt chính chủ, phong thái tự tin, giới thiệu sinh viên FPT Polytechnic và nêu cảm nhận tự nhiên.

• Kỹ thuật mượt: Show được lịch sử commit đa dạng (git log), giải thích tường minh tư duy duyệt mảng/ma trận và thực hiện thành công luồng Git Push trực tiếp trên video.
2.0đ
Lưu ý
Sinh viên không chia nhỏ commit (chỉ commit 1 lần duy nhất cho cả bài), viết dồn hết code vào hàm main(), để Repository ở chế độ Private hoặc nộp bài muộn sẽ bị trừ từ 1.0 đến 3.0 điểm tùy mức độ vi phạm.


Trừ điểm
TỔNG
TỔNG ĐIỂM ĐÁNH GIÁ TỐI ĐA BUỔI THỰC HÀNH LAB 6
10.0đ


📦 QUY CÁCH NỘP BÀI TRÊN HỆ THỐNG LMS
Sinh viên thực hiện nộp đồng thời 2 thành phần trước thời hạn đóng link:
File nén cục bộ: Nén riêng thư mục Lab6 thành file STT_MSSV_Ten_Lab6.zip (hoặc .rar) và upload lên LMS.
Đường dẫn trực tuyến: Copy đường link URL dẫn thẳng vào thư mục Lab6 trên GitHub Repository cá nhân dán vào phần "Nội dung văn bản trực tuyến" khi nộp bài trên LMS.
