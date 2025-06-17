//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,position,value;
    printf("Nhập số phần tử: ");
    scanf("%d",&n);
    if (n < 0 || n > 100) {
        printf("Quá nhiều phần tử!");
        return 0;
    }
    int *array = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhập array[%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("Nhập vị trí index : ");
    scanf("%d",&position);
    printf("Nhập giá trị : ");
    scanf("%d",&value);
    printf("Mảng trước khi cập nhật : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    array[position] = value;
    printf("Mảng sau khi cập nhật : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ",array[i]);
    }
    free(array);
}