//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>
void deleteArray(int array[],int n,int position) {
    for(int i=position;i < n;i++) {
        array[i]=array[i+1];
    }
}

int main() {
    int n,position;
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
    if (position < 0 || position > n) {
        printf("Vị trí không hợp lệ!");
        return 0;
    }
    printf("Mảng trước khi xoá : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("Mảng sau khi xoá : \n");
    deleteArray(array,n,position);
    for (int i = 0; i < n; i++) {
        printf("%d ",array[i]);
    }
    free(array);
    return 0;
}