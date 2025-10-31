//
// Created by zhu on 2025/10/22.
//
#include <stdio.h>

void calculator(int i);

int main(void) {
    int x;
    for (int i = 100; i < 1000; i++)
        calculator(i);
}

void calculator(int i) {
    int temp = i;
    int x[3];
    int j = 0;
    int sum = 0;
    while (temp > 0) {
        x[j] = temp % 10;
        j++;
        temp /= 10;
    }

    for (int k = 0; k < 3; k++)
        sum += x[k] * x[k] * x[k];
    if (sum == i) {
        printf("%d\t", i);
    }
}
