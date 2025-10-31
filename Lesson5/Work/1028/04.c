//
// Created by zhu on 2025/10/29.
//
// todo:4.定义指向常量的常指针存储数据，并尝试修改指针指向，以及指针指向变量的内容，观察是否出错。

#include <stdio.h>

int main(void)
{
    int a=10,b=20,c=30,d=40;
    int const *p1=&a;
    int * const p2=&b;
    const int *p3=&c;
    const int *const p4=&d;

    //尝试修改值：、
    *p1=20;//报错
    *p2=30;//不报错
    *p3=40;//报错
    *p4=50;//报错

    //尝试修改地址

    p1=&b;//不报错
    p2=&c;//报错
    p3=&d;//不报错
    p4=&a;//报错
}
