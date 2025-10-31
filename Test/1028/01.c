//
// Created by zhu on 2025/10/28.
//


// todo:定义2行3列的数组，存储6个学生的分数，要求通过指针循环给数组赋值。接着，使用指针遍历数组，求总分和平均分
#include "stdio.h"

int main(void)
{
    int array[2][3];
    int sum = 0;
    for (int* p = &array[0][0]; p < &array[0][0] + 6; p++)
    {
        *p = p - *array;
        sum += *p;
    }
    printf("%d", sum/6);
}
