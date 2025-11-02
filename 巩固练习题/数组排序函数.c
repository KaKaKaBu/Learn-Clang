//
// Created by zhu on 2025/11/2.
//

//数组排序函数
#include <stdio.h>
#include <stdlib.h>

void sortArray(int *arr, int size);
//生成随机数组
void generateRandomArray(int *arr, int size);
//打印数组
void printArray(int *arr, int size);

int main() {
    int arr[10];
    generateRandomArray(arr, 10);
    printf("排序前的数组：\n");
    printArray(arr, 10);
    sortArray(arr, 10);
    printf("排序后的数组：\n");
    printArray(arr, 10);
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void generateRandomArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; //生成0到99的随机数
    }
}

void sortArray(int *arr, int size) {
    //使用冒泡排序法
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                //交换
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}