//
// Created by zhu on 2025/10/27.
//
#include <stdio.h>
// todo:4.定义3个整数变量存储数据，并定义一个指针数组，存储这3个变量的地址，接着定义一个二级指针指向数组，并遍历数组内容
int main(void)
{
    int a=1,b=2,c=3;
    int *p1[3]={&a,&b,&c};
    for (int **ptr=p1;ptr<p1+3;ptr++)
    {
        printf("%d\t",**ptr);
    }
}