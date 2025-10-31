//
// Created by zhu on 2025/10/21.
//


#include <stdio.h>

int reverseNumber(int x);

char *isPalindromeNumber(int x);

int eachSum(int x);

void printResult(int x);
int main(void) {
    printResult(12345);
}

int reverseNumber(int x) {
    int reverse = 0;
    while (x > 0) {
        reverse = x % 10 + reverse * 10;
        x /= 10;
    }
    return reverse;
}

char *isPalindromeNumber(int x) {
    if (x == reverseNumber(x))
        return "这个数是回文数";
    return "这个数不是回文数";
}

int eachSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum = sum + x % 10;
        x /= 10;
    }
    return sum;
}
void printResult(int x) {
    printf("逆序数是：%d\n%s\n每一位相加是：%d\n",
        reverseNumber(x),isPalindromeNumber(x),eachSum(x));
}
