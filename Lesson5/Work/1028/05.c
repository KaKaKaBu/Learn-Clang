//
// Created by zhu on 2025/10/29.
//
//todo:5.定义void * 类型的指针，分别指向不同类型的数据，然后输出通过该指针输出对应的内容

#include <stdio.h>

int main(void)
{
    void *p;
    int a=10;
    short b=20;
    char c='d';
    long d=40;
    float e=50.0;
    double f=50.0;

    p=&a;
    printf("%d\t",*(int *)p);
    p=&b;
    printf("%u\t",*(short*)p);
    p=&c;
    printf("%c\t",*(char*)p);
    p=&d;
    printf("%ld\t",*(long*)p);
    p=&e;
    printf("%f\t",*(float*)p);
    p=&f;
    printf("%lf\t",*(double*)p);

}
