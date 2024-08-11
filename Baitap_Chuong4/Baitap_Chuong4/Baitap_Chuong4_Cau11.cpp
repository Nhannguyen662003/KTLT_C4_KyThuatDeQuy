#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Hàm tính số Fibonacci F(n) với đệ quy
int fibonacci(int n) {
    if (n <= 2) {
        return 1; // F(n) = 1 với n <= 2
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2); // F(n) = F(n-1) + F(n-2)
    }
}

// Hàm xuất dãy Fibonacci có n số
void printFibonacciSequence(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so luong so trong day Fibonacci: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("So luong phan tu phai la so nguyen duong.\n");
        return 1;
    }

    printf("Day Fibonacci gom %d so la:\n", n);
    printFibonacciSequence(n);

    return 0;
}
