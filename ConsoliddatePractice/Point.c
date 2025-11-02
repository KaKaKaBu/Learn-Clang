//
// Created by zhu on 2025/11/2.
//


#include <stdio.h>

void sayHello()
{
    printf("Hello C!\n");
}

void callBack(void (*p)())
{

    printf("this is callback\n");
    p();
}


int main(void)
{
    void (*p)()=sayHello;
    callBack(p);
}