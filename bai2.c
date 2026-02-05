/******************************************************************************
  * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44395]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

// Tạo hàm kiểm tra năm nhuận
int laNamNhuan(int nam) {
    if (nam % 400 == 0)
        return 1;
    else if (nam % 4 == 0 && nam % 100 != 0)
        return 1;
    else
        return 0;
}

int main() {
    int nam;

    // Nhập năm
    printf("Nhap nam: ");
    scanf("%d", &nam);

    // Gọi hàm kiểm tra
    if (laNamNhuan(nam) == 1)
        printf("%d la nam nhuan", nam);
    else
        printf("%d khong phai la nam nhuan", nam);

    return 0;
}
