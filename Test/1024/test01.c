//
// Created by zhu on 2025/10/24.
//
//1.通过循环得到每一位数放入数组
//2.取出数组中的数计算四次方
//3.计算sum


#include <math.h>
#include <stdio.h>

void calculator(int x);
//利用for循环传入数据调用函数
int main(void) {

    for (int i=1000;i<=9999;i++) {
        calculator(i);
    }
}

void calculator(int x) {
    int sum = 0;
    int y[4];
    int temp = x;
    for (int i = 0; i < 4; i++) {
        y[i] = temp % 10;
        temp /= 10;
    }
    for (int i = 0; i < 4; i++) {
        sum += pow(y[i], 4);
    }
    if (sum == x) {
        printf("%d\t", x);
    }
}

int* divideNum(int x);
