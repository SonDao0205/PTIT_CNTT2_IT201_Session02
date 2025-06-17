//
// Created by SonwDao on 17/6/25.
//
#include<stdio.h>
#include<stdlib.h>
void countExist(int array[],int n) {
    int exist[n];
    for(int i=0;i<n;i++) {
        exist[i]=0;
    }
    for(int i=0;i<n;i++) {
        if(exist[i] == 1) {
            continue;
        }
        int count = 1;
        for (int j = i+1; j < n; ++j) {
            if(array[i] == array[j]) {
                exist[j] = 1;
                count++;
            }
        }
        printf("Phần tử %d xuất hiện %d lần\n",array[i],count);
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
    countExist(array, n);
    free(array);
    return 0;
}