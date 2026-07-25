BÀI THỰC HÀNH 04 (LAB 4)
🎯 MỤC TIÊU
Sau bài thực hành này, sinh viên có khả năng:
Hiểu và vận dụng thành thạo các cấu trúc vòng lặp trong C: while, do-while và for.
Biết cách sử dụng các câu lệnh điều khiển vòng lặp (break, continue) và biến đếm/biến tích lũy.
Xây dựng hệ thống Menu điều khiển hoạt động lặp vô hạn (chỉ dừng khi chọn Thoát) bằng vòng lặp do-while kết hợp switch-case.
Nâng cao kỹ năng tư duy thuật toán số học và rèn luyện kỹ năng truyền đạt qua Vlog trải nghiệm.

🛠️ NỘI DUNG CHI TIẾT
Sinh viên chỉ cần tạo duy nhất 01 file code đặt tên là Main_Menu_Lab4.c nằm trực tiếp trong thư mục con Lab4 (Cấu trúc Repository: STT_MSSV_Ten/Lab4/Main_Menu_Lab4.c). Toàn bộ các bài toán sẽ được điều khiển lặp đi lặp lại thông qua Menu điều khiển sử dụng vòng lặp do-while.

Chức năng chính: HỆ THỐNG MENU LẶP (Bắt buộc)
Yêu cầu kỹ thuật: Sử dụng vòng lặp do-while bọc ngoài cấu trúc switch-case. Sau khi thực hiện xong một chức năng, chương trình không bị dừng lại mà sẽ tự động hiển thị lại Menu để người dùng tiếp tục lựa chọn. Chương trình chỉ kết thúc khi chọn Chức năng 4 (Thoát).
Giao diện Menu hiển thị:
+---------------------------------------------------+
|             MENU CHƯƠNG TRÌNH LAB 4                            |
+---------------------------------------------------+
| 1. Tính trung bình tổng các số chia hết cho 2             |
| 2. Kiểm tra Số nguyên tố                                                  |
| 3. Kiểm tra Số chính phương                                           |
| 4. Thoát chương trình                                                       |
+---------------------------------------------------+
>> Xin mời chọn chức năng (1-4): 


📌 HƯỚNG DẪN COMMIT 1: Sau khi dựng xong khung do-while + switch-case và chạy thử hiển thị Menu thành công, mở Terminal thực hiện ngay lệnh:
git add .
git commit -m "Lab4: Dung khung Menu lap vo han bang do-while"

Chức năng 1: Tính trung bình tổng các số chia hết cho 2 (2.0 Điểm)
Logic xử lý: Nhập từ bàn phím 2 giá trị nguyên min và max. Sử dụng vòng lặp while hoặc for để duyệt các số tự nhiên từ min đến max.
Yêu cầu tính toán:
Lọc ra các số chia hết cho 2 (i % 2 == 0).
Tính tổng các số thỏa mãn và đếm số lượng các số đó.
Tính giá trị trung bình cộng: trungBinh = tong/bienDem.
Bắt lỗi kỹ thuật: Trường hợp trong khoảng [min, max] không có số nào chia hết cho 2 (hoặc người dùng nhập min > max), cần hiển thị thông báo xử lý để tránh lỗi chia cho 0 (division by zero).
📌 HƯỚNG DẪN COMMIT 2: Sau khi viết xong và test thành công Chức năng 1, thực hiện lệnh:
git add .
git commit -m "Lab4: Hoan thanh Chuc nang 1"

Chức năng 2: Kiểm tra Số nguyên tố (3.0 Điểm)
Logic xử lý: Nhập vào một số nguyên x từ bàn phím. Kiểm tra xem x có phải là số nguyên tố hay không và in kết luận ra màn hình.
Giải thuật: Số nguyên tố là số nguyên lớn hơn 1 và chỉ chia hết cho 1 và chính nó.
Nếu x < 2: Kết luận x không phải là số nguyên tố.
Nếu x >= 2: Sử dụng vòng lặp for duyệt biến đếm i từ 2 đến x - 1 (hoặc sqrt(x)). Nếu phát hiện x % i == 0 thì x không phải số nguyên tố. Nếu duyệt hết vòng lặp mà không chia hết cho số nào thì x là số nguyên tố.

📌 HƯỚNG DẪN COMMIT 3: Sau khi viết xong và test các trường hợp số nguyên tố (2, 3, 7, 11...) thành công, thực hiện lệnh:
git add .
git commit -m "Lab4: Hoan thanh Chuc nang 2"

Chức năng 3: Kiểm tra Số chính phương (2.0 Điểm)
Logic xử lý: Nhập vào một số nguyên x từ bàn phím. Kiểm tra xem x có phải là số chính phương hay không.
Giải thuật: Số chính phương là số mà giá trị của nó là bình phương của một số tự nhiên (Ví dụ: 9 = 3 * 3, 16 = 4 * 4).
Sử dụng vòng lặp for chạy biến đếm i từ 1 đến x.
Nếu phát hiện i * i == x thì kết luận x là số chính phương và dùng câu lệnh break để thoát vòng lặp sớm.
Nếu vòng lặp kết thúc mà không thỏa mãn điều kiện trên thì x không phải là số chính phương.
📌 HƯỚNG DẪN COMMIT 4: Sau khi viết xong Chức năng 3 và test thử các số (4, 9, 16, 25...), thực hiện lệnh:
git add .
git commit -m "Lab4: Hoan thanh Chuc nang 3 - Kiem tra So chinh phuong"

Vlog Review & Trải nghiệm Học tập (2.0 Điểm)
Vị trí lưu file: Tạo file Review_Lab4.md nằm trực tiếp trong thư mục Lab4 (Chứa link Google Drive/YouTube video công khai).
Yêu cầu thực hiện: Sinh viên tự quay video Vlog thời lượng từ 2 đến 3 phút, bật camera/webcam chính chủ, âm thanh rõ ràng với cấu trúc 3 phần chuẩn Poly:
Phần 1: Mở đầu - Kết nối & Cảm nhận (Khoảng 45 giây): Chào mừng theo phong cách FPT Polytechnic, giới thiệu Họ tên, MSSV. Nêu cảm nhận chân thực về bài học vòng lặp (while, do-while, for), những điều thú vị hoặc cái "bẫy" lặp vô hạn (infinite loop) mà bản thân đã gặp phải.
Phần 2: Review Kỹ thuật (Khoảng 1.5 phút): Show màn hình VS Code chứa file Main_Menu_Lab4.c.
Giải thích cơ chế giúp Menu lặp đi lặp lại nhiều lần bằng vòng lặp do-while.
Chọn 1 thuật toán tâm đắc (Kiểm tra Số nguyên tố hoặc Số chính phương) để giải thích logic biến đếm/câu lệnh break.
Thực hiện thao tác sửa code trực tiếp, sau đó chạy lệnh Commit và Push mã nguồn lên GitHub ngay trên màn hình video.
Phần 3: Kết thúc: Tóm tắt ngắn gọn trải nghiệm và gửi lời chào tạm biệt đến giảng viên.
📌 HƯỚNG DẪN COMMIT 5 (Commit cuối cùng): Tạo file Bai4_Review_lab4.md, dán link video vào và gõ lệnh:
git add .
git commit -m "Lab4: Hoan thanh Bai 4 - Bo sung link Vlog Review"
git push origin main

📊 TIÊU CHÍ CHẤM ĐIỂM CHI TIẾT

Bài/Chức năng
Mô tả chi tiết tiêu chí đánh giá và chấm điểm
Điểm tối đa
Menu do-while
• Đặt tên file Main_Menu.c và lưu trữ chính xác trong folder con Lab4 trên GitHub.

• Sử dụng chuẩn xác do-while giúp Menu tái lặp mượt mà, chọn 4 thoát chương trình chính xác.
1.0đ
Chức năng 1
• Sử dụng vòng lặp duyệt đúng khoảng [min, max], lọc đúng số chia hết cho 2.

• Tính chính xác giá trị trung bình cộng và có xử lý bắt lỗi tránh chia cho 0.
2.0đ
Chức năng 2
• Áp dụng chuẩn xác vòng lặp để kiểm tra thuật toán số nguyên tố.

• Xuất kết quả chính xác cho các trường hợp số thử nghiệm khác nhau.
3.0đ
Chức năng 3
• Xây dựng đúng thuật toán kiểm tra số chính phương bằng vòng lặp.

• Sử dụng hợp lý câu lệnh break để tối ưu hóa hiệu năng vòng lặp.
2.0đ
Bài 4 (Vlog)
• Vlog chuẩn Poly: Video thu hình rõ nét, quay trực diện khuôn mặt chính chủ, phong thái tự tin, giới thiệu sinh viên FPT Polytechnic và nêu cảm nhận tự nhiên.

• Kỹ thuật mượt: Thuyết minh mạch lạc logic vòng lặp/Menu lặp và thực hiện thành công luồng Git Commit/Push trực tiếp trên video.
2.0đ
Lưu ý
Sinh viên để Repository ở chế độ Private, nộp bài muộn hoặc sắp xếp sai cấu trúc cây thư mục môn học sẽ bị trừ từ 1.0 đến 3.0 điểm tùy mức độ vi phạm.
Trừ điểm
TỔNG
TỔNG ĐIỂM ĐÁNH GIÁ TỐI ĐA BUỔI THỰC HÀNH LAB 4
10.0đ



📦 QUY CÁCH NỘP BÀI TRÊN HỆ THỐNG LMS
Sinh viên thực hiện nộp đồng thời 2 thành phần trước thời hạn đóng link:
File nén cục bộ: Nén riêng thư mục Lab4 thành file STT_MSSV_Ten_Lab4.zip (hoặc .rar) và upload lên LMS.
Đường dẫn trực tuyến: Copy đường link URL dẫn thẳng vào thư mục Lab4 trên GitHub Repository cá nhân dán vào phần "Nội dung văn bản trực tuyến" khi nộp bài trên LMS.
