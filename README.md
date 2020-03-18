##### GameSnake
##### GIẢNG VIÊN HƯỚNG DẪN: VŨ ĐÌNH BẢO
##### HỌC VIÊN THỰC HIỆN: HUỲNH THANH CẢNH

### ĐẶC TẢ Ý TƯỞNG GAME SNAKE:
   Game bao gồm 3 đối tượng: **Snake** , **Food** , **Bot** , **Map** .
   - **Snake:** Di chuyển, ăn mồi, tốc độ tăng dần sao khi lên level.
   - **Food:** 
      - Thức ăn thường.
      - Thức ăn có độc (rắn bị trừ đốt).
      - Thức ăn tăng 2, 3,... đốt.
      - Thức ăn hỗ trợ(rắn ăn xong thì sẽ tách làm 2, 1 nữa người chơi điều khiển, 1 nữa tự động
				đi ăn mồi(AI)->tốc độ của rắn AI sẽ nhanh gấp 2 tốc độ hiện tại của rắn, 
				số mồi trong map sẽ tăng gấp đôi, hiệu lực thức ăn trong 5s).
      - Thức ăn diệt quái(rắn có thể ăn luôn quái, 1 quái tăng 2 đốt, hiệu lực thức ăn trong 5s,
				quái sẽ tự hồi sinh).
   - **Bot:** 
      - Quái nhỏ (**Màu xanh:** rắn đụng trúng bị trừ 1/2 số đốt hiện có, nếu rắn chưa có đốt nào thì
        chết luôn, **Màu đỏ:** rắn đụng trúng bị trừ 1/2 tốc độ hiện có, nếu tốc độ < 1s thì cho
        chết luôn).
      - Quái lớn (rắn dụng trúng chết luôn).
   - **Map:**
      - Map cấp 1 (không có vật cản) -> Dễ.
      - Map cấp 2 (có vật cản) -> Trung Bình.
      - Map cấp 3 (có cả vật cản và quái, số lượng ít) -> Khó.
      - Map cấp 4 (có cả vật cản và quái, số lượng nhiều) -> Cực khó.
      
      Có thể cho rắn đi xuyên tường (rắn đi qua tường bên này, thì sẽ đi tiếp nhưng vị trí bắt
		  đầu là ở tường phía đối diện)

### => HƯỚNG DẪN CÁCH CHẠY PROJECT
	Bước 1: Giải nén file rar vừa tải về
	Bước 2: Mở file vừa giải nén -> chọn folder Release và chạy file Snake.exe để mở chương trình
  
**Hi:) :** Hiện tại game vẫn còn đang dang dỡ và sẽ update sau, các bạn cũng có thể phát triển thêm dựa
vào SourceCode và bảng ClassDiagram của mình hoặc phát triển theo ý tưởng độc đáo va táo bạo riêng của
bản thân =)).

Rắn đã di chuyển được, ăn mồi, tăng đốt và xử lý đụng tường.

## ===CÁM ƠN BẠN ĐÃ SỬ DỤNG CHƯƠNG TRÌNH===
###### Mọi thắc mắc xin liên hệ facebook: https://www.facebook.com/canh.thanh.750983
###### Mọi vấn đề các bạn góp ý đều là động lực để chúng tôi phát triển, xin cảm ơn.
