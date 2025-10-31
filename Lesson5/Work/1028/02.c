//
// Created by zhu on 2025/10/28.
//todo:2.定义整型指针数组，长度为3。存储三个指向整型变量的指针。定义二级指针，使用循环，访问数组，输出数据

#include <stdio.h>

int main()
{
    int a=10,b=20,c=30;
    int *p[3]={&a,&b,&c};
    for (int **ptr=p;ptr<p+3;ptr++)
    {
        printf("%d ",**ptr);
    }
}
