//
// Created by zhu on 2025/10/27.
//

/*1.定义字符数组，整型变量，小数变量
2.通过输入的方式输入姓名，年龄，身高
3.使用打印函数输出姓名，年龄，身高*/

#include <stdio.h>

int main()
{
    /*char name[10];
    char sex;
    int number;
    double number2;
    printf("请输入姓名，性别，年龄，身高\n");
    scanf("%s %c%d%lf", name, &sex, &number, &number2); //%c前加入空格读取缓冲区中的'\n'
    printf("姓名:%s\t\n性别：%c\t\n年龄：%d\t\n身高：%f\t\n", name, sex, number, number2);*/
    //精度问题
    double number3 = 1.2345678901234;//double的有效位有15-16位
    float number4 = 1.2345678901234;//float的有效位只有6-7位
    //printf相关：%f只能处理4个字节的小数，%lf可以处理8个字节的小数
    printf("%.20lf\n%.20f\n",number3,number4);

    //char相关问题
    unsigned char a=80;//占用1个字节，范围为0-255；
    char b=-80; //默认为signed char，范围为-128-127；
    /*scanf("%hhu",&a);
    char仅仅占用一个字节，hhu==short short unsigned 仅占用一个字节；
    同样的还有llu 指long long unsigned占用8个字节
    如果输入控制符不对则会出现栈区覆盖的问题*/
    printf("%d\n%c\n%o\n%x\n",a,a,a,a);
    printf("===================");
    printf("\n%d\n%c\n%o\n%x\n",b,b,b,b);



}
