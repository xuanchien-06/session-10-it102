#include<stdio.h>
int main() {
    int a, b, temp;
    printf("Nhap so dong: ");
    scanf("%d", &a);
    printf("Nhap so cot: ");
    scanf("%d", &b);
    int arr[a][b];
    printf("Nhap cac gia tri cua mang:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < a; i++) {
        for (int k = 0; k < b - 1; k++) {
            for (int j = 0; j < b - k - 1; j++) {
                if (arr[i][j] > arr[i][j + 1]) {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }
    }
    printf("Mang tang dan theo tung dong:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


