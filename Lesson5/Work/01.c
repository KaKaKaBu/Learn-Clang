//
// Created by zhu on 2025/10/27.
//

/*
todo:1.定义int类型,short类型,char类型的指针，指向对应类型的变量，并使用指针输出变量内容

todo:6.思维导图，梳理笔记
*/


#include <stdio.h>

int main(void)
{
    int a=1;
    short b=2;
    char c='A';
    int* p1 = &a;
    short* p2 = &b;
    char* p3 = &c;
    printf("int a:%d\nshort b:%u\nchar c:%c\n",*p1,*p2,*p3);

}
