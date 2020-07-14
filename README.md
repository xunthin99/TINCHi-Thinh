5. Quản lý điểm sinh viên theo hệ tín chỉ:
Ta tổ chức các danh sách sau: 
- Danh sách môn học: 1 mảng con trỏ có tối đa 300 môn (MAMH (C10) , TENMH, STCLT (số tín chỉ lý thuyết), STCTH (số tín chỉ thực hành))
- Danh sách Lop Tín chỉ:  theo cấu trúc cây nhị phân tìm kiếm (MALOPTC (số nguyên),  MAMH, Niên khóa, Học kỳ, Nhóm, số sv max, số sv min, con trỏ dssvđk): con trỏ dssvđk trỏ đến danh sách sinh viên  đăng ký lớp tín chỉ.  
- Danh sách sinh viên : danh sách liên kết đơn luôn có thứ tự theo malop+masv (MASV (C12) , HO, TEN,  PHAI, SODT, MALOP (C15), Năm nhập học)
- Danh sách Đăng ký (danh sách liên kết đơn):  (MASV ,  DIEM (số thực))

Chương trình có các chức năng sau : 
a. Mở lớp tín chỉ : cho phép cập nhật (thêm / xóa / hiệu chỉnh ) thông tin của lớp tín chỉ. Mã lớp tín chỉ là 1 số nguyên dương do chương trình tự động sinh.
b. In danh sách sinh viên đã đăng ký lớp tín chỉ  theo 1 niên khóa, học kỳ, nhóm , mã môn học nào đó
c. NhapSV : Cập nhập sinh viên của 1 lớp: nhập vào mã lớp trước, sau đó nhập các sinh viên vào lớp đó. 
Lưu ý : Khi nhập liệu phải đủ 3 chức năng Thêm / Xóa / Hiệu chỉnh
            Quá trình nhập SV mới sẽ dừng khi ta nhập vào  mã sv là chuỗi rỗng.
	Nhập sinh viên luôn phải đảm bảo tính thứ tự của danh sách sinh viên 
d. In DSSV của 1 lớp (dựa vào mã lớp) theo thứ tự alphabet tăng dần của masv  
e. Nhập môn học: cho phép cập nhật (thêm / xóa / hiệu chỉnh ) thông tin của môn học 
f. In danh sách môn  học  tăng dần theo tên môn học. 
g. Đăng ký lớp tín chỉ: user chính là sinh viên. Dựa vào Niên khóa , học kỳ nhập vào, chương trình sẽ lọc ra các lớp môn học cho sinh viên chọn để đăng ký. Chương trình cho đăng ký 1 loạt các lớp môn học, và cho phép bỏ chọn lớp môn học mới đăng ký sai.
h. Nhập điểm: User nhập vào niên khóa, học kỳ, nhóm , môn học. Căn cứ vào các giá trị này, chương trình sẽ tự động lọc ra danh sách sv đã đăng ký lớp môn học, và in ra màn hình danh sách nhập điểm theo dạng sau : 
STT	MASV	HO	TEN	DIEM
99	XXXX	XXXXXXXXXXX	XXXXX	5
99	XXXX	XXXXXXXXXXX	XXXXX	6
				
Bốn cột đầu đã có sẵn dữ liệu, lúc này user chỉ việc nhập điểm hoặc hiệu chỉnh điểm trực tiếp vào khung trên cột điểm.
i. In bảng điểm môn học của 1 lớp tín chỉ: User nhập vào niên khóa, học kỳ, nhóm , môn học, chương trình sẽ in ra bảng điểm đã thi . Kết  quả trên màn hình:

BẢNG ĐIỂM MÔN HỌC <tenmon>
	Niên khóa  :  ....   Học kỳ : .....  Nhóm : ...	 
	 
STT	MASV	HO	TEN	DIEM
99	XXXX	XXXXXXXXXXX	XXXXX	99
99	XXXX	XXXXXXXXXXX	XXXXX	99

j. In điểm trung bình kết thúc khóa học của 1 lớp theo số tín chỉ. Kết xuất:
BẢNG THỐNG KÊ ĐIỂM TRUNG BÌNH KHÓA HỌC 
	Lớp 	 : <malop>	Năm nhập học: 9999
	 
STT	MASV	HO	TEN	Điểm TB 
99	XXXX	XXXXXXXXXXX	XXXXX	99.9
99	XXXX	XXXXXXXXXXX	XXXXX	99.9


Lưu ý: Chương trình cho phép lưu các danh sách vào file; Kiểm tra các điều kiện khi nhập làm dữ liệu bị sai.
