//
// Created by SonwDao on 17/6/25.
//
#include <stdio.h>
#include <stdlib.h>
void item(int array[],int n) {
    int max_count = 0;
    int max_number = array[0];
    int count = 1;
    for (int i = 0; i < n; i++) {
        count = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_number = array[i];
        }
    }
    printf("\nPhần tử xuất hiện nhiều nhất :  %d\n", max_number);
}
// độ phức tạp thời gian : O(n^2)
// độ phức tạp không gian : O(1)

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
    item(array, n);
    free(array);
    return 0;
}