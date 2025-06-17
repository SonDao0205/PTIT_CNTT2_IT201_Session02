//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>
int dubplicateNumber(int *array, int n,int x) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    int x;
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
    printf("Nhập số cần tìm : ");
    scanf("%d",&x);
    printf("Số lần xuất hiện : %d\n",dubplicateNumber(array,n,x));
    free(array);
}

