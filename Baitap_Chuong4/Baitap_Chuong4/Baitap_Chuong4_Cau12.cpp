#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Hàm tính số Fibonacci gần nhất nhỏ hơn n theo cách đệ quy
int fibonacciRec(int a, int b, int n) {
    int next = a + b;
    if (next >= n) {
        return a; // Trả về số Fibonacci gần nhất nhỏ hơn n
    }
    else {
        return fibonacciRec(b, next, n);
    }
}

// Hàm tìm số Fibonacci lớn nhất nhưng nhỏ hơn n bằng cách đệ quy
int findFibonacciLessThanNRec(int n) {
    if (n <= 1) {
        return 0; // Không có số Fibonacci nhỏ hơn 1
    }
    return fibonacciRec(0, 1, n);
}


int main() {
    int n, choice;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n phai la so nguyen duong.\n");
        return 1;
    }

    printf("Chon phuong phap:\n");
    printf("1. Tim so Fibonacci theo de quy\n");
    printf("2. Tim so Fibonacci theo khu de quy\n");
    printf("Nhap lua chon cua ban (1-2): ");
    scanf("%d", &choice);

    int result;

    switch (choice) {
    case 1:
        result = findFibonacciLessThanNRec(n);
        printf("So Fibonacci lon nhat nho hon %d (de quy) la: %d\n", n, result);
        break;
    case 2:
        break;
    default:
        printf("Lua chon khong hop le. Vui long thu lai.\n");
        return 1;
    }

    return 0;
}
