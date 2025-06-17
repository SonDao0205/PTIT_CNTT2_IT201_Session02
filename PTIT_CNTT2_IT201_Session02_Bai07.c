//
// Created by SonwDao on 17/6/25.
//
#include <stdlib.h>
#include <stdio.h>

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
    printf("Nhập giá trị : ");
    scanf("%d", &value);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if (array[i] + array[j] == value) {
                printf("%d,%d\n",array[i],array[j]);
                return 0;
            }
        }
    }
    printf("Không hợp lệ!");
    free(array);
    return 0;
}
