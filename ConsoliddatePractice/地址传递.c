//
// Created by zhu on 2025/11/2.
//

#include <stdio.h>

void increaseByTen(int *num) {
    *num+=10;
    printf("%d\n", *num);
}
int main(void) {
    int num = 10;
    printf("%d\n", num);

    increaseByTen(&num);
}