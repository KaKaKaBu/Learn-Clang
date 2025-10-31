//
// Created by zhu on 2025/10/27.
//
#include <stdio.h>
#include <string.h>
//todo:3.定义指针指向一个字符串，使用循环的方式，通过指针打印出每个字符
int main(void)
{
    char str[]="Hello World";
    for (char *p=str;p<str+strlen(str);p++){
        printf("%c\n",*p);
    }
}