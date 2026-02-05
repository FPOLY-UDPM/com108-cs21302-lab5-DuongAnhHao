/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44395]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// Tạo hàm tìm số lớn nhất trong 3 số
int timMax(int so1, int so2, int so3) {
    int max = so1;

    if (so2 > max) {
        max = so2;
    }

    if (so3 > max) {
        max = so3;
    }

    return max;
}

int main() {
    int a, b, c;

    // Nhập 3 số từ bàn phím
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    // Gọi hàm tìm số lớn nhất
    int soMax = timMax(a, b, c);

    // Xuất kết quả
    printf("So lon nhat trong 3 so la: %d", soMax);

    return 0;
}
