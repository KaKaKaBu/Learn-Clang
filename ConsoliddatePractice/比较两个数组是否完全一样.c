//
// Created by zhu on 2025/11/2.
//


#include <stdio.h>

//比较两个数组是否完全一样
int areArraysEqual(int *arr1, int *arr2, int size);
int main() {
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int arr3[5]={1,2,3,4,6};
    if (areArraysEqual(arr1, arr2, 5)) {
        printf("arr1和arr2完全一样\n");
    } else {
        printf("arr1和arr2不一样\n");
    }
    if (areArraysEqual(arr1, arr3, 5)) {
        printf("arr1和arr3完全一样\n");
    } else {
        printf("arr1和arr3不一样\n");
    }
}

int areArraysEqual(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i]!=arr2[i]) {
            return 0; //不一样
        }
    }
    return 1; //完全一样
}
