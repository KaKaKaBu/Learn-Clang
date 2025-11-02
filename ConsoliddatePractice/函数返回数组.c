//
// Created by zhu on 2025/11/2.
//
#include <stdio.h>
#include <stdlib.h>

int *generateArray(int size) {
    int *num = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        num[i] = i;
    }
    return num;
}

void printArray(int *num, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
}

int main() {
    int *array = generateArray(10);
    printArray(array, 10);
    free(array);
}
