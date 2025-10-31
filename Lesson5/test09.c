//
// Created by zhu on 2025/10/28.
//

#include <stdio.h>

char* test()
{
    static char Str[]="Hello world";//设为静态防止函数运行完成后内存被回收
    return Str;
}

char* test02()
{
    char* str="Hello C";//指针字符串相当于常量存放于全局区，所以不会被回收
    return str;
}
char* test03()
{
    char Str[]="Hi C";
    return Str;//局部变量存放于对应函数的栈区内部会随着函数结束而被释放
}


int main(void)
{

    char * Str=test();
    char * str=test02();
    char * Str03=test03();
    printf("%s",Str);
    printf("%s",str);
    printf("%s\n",Str03);
}