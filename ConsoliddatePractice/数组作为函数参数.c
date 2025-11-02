//
// Created by zhu on 2025/11/2.
//

#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int num[]={1,2,3,4,5,6,7,8,9,10};
    printArray(num,10);
}
