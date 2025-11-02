//
// Created by zhu on 2025/11/2.
//

#include <stdio.h>

void square(int num);
int main(void) {
    int number =5;
    printf("%d\n", number);
    square(number);
    return 0;
}


void square(int num) {
    num*=num;
    printf("%d\n", num);
}