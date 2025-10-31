//
// Created by zhu on 2025/10/21.
//
#include <stdio.h>
int Factorial(int x);
int FactorialPlus(int x);
int FactorialMax(int x);
int main(void) {
    int a=0;
    // printf("请输入一个数字");
    // scanf("%d",&a);
    printf(("%d\n"),FactorialMax(5));
}

int Factorial(int x) {
    if (x == 1||x==0)
        return 1;
    return x*Factorial(x - 1);
}
//传入2输出5 传入3输出14
int FactorialPlus(int x) {
    if (x==1||x==0)
        return 1;
    return Factorial(x)+FactorialPlus(x-1);

}
int FactorialMax(int x) {
    if (x==1||x==0)
        return 1;
    return FactorialPlus(x)+FactorialMax(x-1);
}
