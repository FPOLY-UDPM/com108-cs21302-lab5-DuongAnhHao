/******************************************************************************
   * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44395]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

// Hàm hoán vị dùng con trỏ
void hoanVi(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    // Nhập 2 số
    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    // Gọi hàm hoán vị (truyền tham chiếu)
    hoanVi(&a, &b);

    // In kết quả
    printf("Sau khi hoan vi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
