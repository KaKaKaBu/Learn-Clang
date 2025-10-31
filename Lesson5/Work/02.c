//
// Created by zhu on 2025/10/27.
//
//todo:2.定义一个int类型的数组，长度为5，使用指针以循环的方式为数组的每个元素赋值，并使用指针循环输出数组元素
#include <stdio.h>

int main(void)
{
    int array[5];
    for (int*p=array;p<array+5;p++)
    {
        *p=p-array+1;
        printf("%d\t",*p);
    }
}