//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>
void insertArray(int array[],int n,int position,int value) {
    for(int i=n-1;i>position;i--) {
        array[i]=array[i-1];
    }
    array[position]=value;
}

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
    if (position < 0 || position > n) {
        printf("Vị trí không hợp lệ!");
        return 0;
    }
    printf("Mảng trước khi thêm : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("Mảng sau khi thêm : \n");
    array = (int*)realloc(array,(n+1)*sizeof(int));
    insertArray(array,n,position,value);
    for (int i = 0; i < n+1; i++) {
        printf("%d ",array[i]);
    }
    free(array);
    return 0;
}