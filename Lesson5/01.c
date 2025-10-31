//
// Created by zhu on 2025/10/24.
//

#include <stdio.h>

int main(void) {
    int num=100;
    int *p;
    p=&num;
    printf("%d\n",*p);
    *p=200;
    printf("%d\n",*p);
    printf("num的地址%p\n",&num);
    printf("指针p的地址%p\n",&p);
    printf("指针p中存储的地址%p\n",p);
}
