//
// Created by zhu on 2025/10/28.
//
/*todo:3.定义求最大值的函数，接收两个整数，并返回最大值。
  定义求最小值的函数，接收两个整数，并返回最小值。
  使用函数指针，依次指向两个函数，输出最大值和最小值*/

#include <stdio.h>

int max(int x, int y)
{
    if (x >= y)
        return x;
    else
        return y;
}

int min(int x, int y)
{
    if (x >= y)
        return y;
    else
        return x;
}

int main(void)
{
    int (*p1)(int x, int y) = max;
    int (*p2)(int x, int y) = min;

    printf("max is %d\nmin is %d\n", p1(1, 2),
           p2(1, 2));
}
