//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>

int maxNumber(int *array,int lenght) {
    int max = array[0];
    for(int i=0;i<lenght;i++) {
        for(int j=0;j<lenght;j++) {
            if(array[i]>max) {
                max = array[i];
            }
        }
    }
    return max;
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
    printf("Phần tử lớn nhất trong mảng là : %d\n",maxNumber(array,n));
    free(array);
}
