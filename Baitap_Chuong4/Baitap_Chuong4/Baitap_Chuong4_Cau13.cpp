#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // Thư viện cho malloc và free

// Hàm tính số hạng thứ n của dãy x
int getX(int n) {
    int* x = (int*)malloc((n + 1) * sizeof(int));
    int* y = (int*)malloc((n + 1) * sizeof(int));
    if (x == NULL || y == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return -1;
    }

    // Khởi tạo các giá trị đầu tiên
    x[0] = 1;
    y[0] = 0;

    // Tính toán các giá trị của dãy x và y
    for (int i = 1; i <= n; i++) {
        x[i] = x[i - 1] + y[i - 1];
        y[i] = 3 * x[i - 1] + 2 * y[i - 1];
    }

    int result = x[n];

    // Giải phóng bộ nhớ cấp phát động
    free(x);
    free(y);

    return result;
}

// Hàm tính số hạng thứ n của dãy y
int getY(int n) {
    int* x = (int*)malloc((n + 1) * sizeof(int));
    int* y = (int*)malloc((n + 1) * sizeof(int));
    if (x == NULL || y == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return -1;
    }

    // Khởi tạo các giá trị đầu tiên
    x[0] = 1;
    y[0] = 0;

    // Tính toán các giá trị của dãy x và y
    for (int i = 1; i <= n; i++) {
        x[i] = x[i - 1] + y[i - 1];
        y[i] = 3 * x[i - 1] + 2 * y[i - 1];
    }

    int result = y[n];

    // Giải phóng bộ nhớ cấp phát động
    free(x);
    free(y);

    return result;
}

int main() {
    int n;

    printf("Nhap chi so n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Chi so n phai la so nguyen duong.\n");
        return 1;
    }

    // Tính số hạng thứ n của dãy x và y
    int x_n = getX(n);
    int y_n = getY(n);

    printf("So hang thu %d cua day x la: %d\n", n, x_n);
    printf("So hang thu %d cua day y la: %d\n", n, y_n);

    return 0;
}

