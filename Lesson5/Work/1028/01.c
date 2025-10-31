//
// Created by zhu on 2025/10/28.
//

//todo:1.解释说明如下每行代码的含义

#include <stdio.h>

int main(void)
{
    int a = 20;
    int* p1 = &a;//定义指针p指向a的地址

    int b = 30;
    int* p2;
    p2 = &b;//指针p2指向b的地址
    p2 = &a;//指针p2指向a的地址

    int c = 40;
    int* p3 = &c; //指针p3指向c的地址
    *p3 = 50;//通过指针将c的值修改为50

    int d;
    int* p4 = &d;//指针p4指向d的地址
    scanf("%d", p4);//输出p4中所存储的地址
    printf("%d", *p4);//输出p4所指向地址的值
}
