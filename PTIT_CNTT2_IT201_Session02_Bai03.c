//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>
void reverseArray(int *array,int n) {
    for(int i=0;i<n-i-1;i++) {
        int temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
}

int main() {
    int n;
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
    reverseArray(array,n);
    printf("Mảng sau khi đảo ngược : \n");
    for(int i=0;i<n;i++) {
        printf("%d ",array[i]);
    }
    free(array);
}
