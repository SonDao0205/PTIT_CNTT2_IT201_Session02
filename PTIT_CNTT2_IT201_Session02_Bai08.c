//
// Created by SonwDao on 17/6/25.
//
#include <stdlib.h>
#include <stdio.h>
void maxNumber(int array[],int n) {
    for (int i = 0; i < n; ++i) {
        if (array[i] < array[i+1]) {
            printf("%d ", array[i+1]);
        }
    }
}

int main() {
    int n, value;
    printf("Nhập số phần tử: ");
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("Quá nhiều phần tử!");
        return 0;
    }
    int *array = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhập array[%d] : ", i);
        scanf("%d", &array[i]);
    }
    maxNumber(array, n);
    free(array);
    return 0;
}
