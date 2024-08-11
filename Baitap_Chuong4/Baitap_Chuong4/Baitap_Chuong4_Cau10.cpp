#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // Thư viện cho malloc và free

// Hàm tìm kiếm nhị phân đệ quy
int binarySearch(int arr[], int left, int right, int x) {
    if (left > right) {
        return -1; // Không tìm thấy
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
        return mid; // Tìm thấy x tại vị trí mid
    }
    else if (arr[mid] > x) {
        return binarySearch(arr, left, mid - 1, x); // Tìm kiếm bên trái
    }
    else {
        return binarySearch(arr, mid + 1, right, x); // Tìm kiếm bên phải
    }
}

int main() {
    int n, x;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    // Cấp phát động cho mảng
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho cho mang.\n");
        return 1;
    }

    printf("Nhap %d so nguyen da duoc sap xep theo thu tu tang dan:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    int result = binarySearch(arr, 0, n - 1, x);

    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", x, result);
    }
    else {
        printf("Gia tri %d khong ton tai trong mang.\n", x);
    }

    // Giải phóng bộ nhớ cấp phát động
    free(arr);

    return 0;
}
