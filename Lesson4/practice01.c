//
// Created by zhu on 2025/10/21.
//

#include <math.h>
#include <stdio.h>

void multiplicationTable(int x);//打印该数的乘法表（无返回值函数)

int Factorial(int x);

char* isPrime(int x);

void printResult(int x);

int main(void) {
    int x;
    printf("请输入一个数\n");
    scanf("%d",&x);

    printResult(x);

}

void multiplicationTable(int x) {
    for (int i=1;i<=x;i++) {
        for (int j=x;j>=i;j--) {
            if (x==i*j) {
                printf("%d*%d=%d\t",i,j,x);
            }
        }
    }
}

int Factorial(int x) {
    if (x==0||x==1)
        return 1;
    return x*Factorial(x-1);
}

char* isPrime(int x) {
    if (x<2) return "该数不是素数";
    for (int i=x/2;i>1;i--) {
        if (x%i==0)
            return "该数不是素数";
    }
    return "该数是素数";
}

void printResult(int x) {
    printf("%s\n",isPrime(x));
    printf("该数的阶乘为%d\n",Factorial(x));
    multiplicationTable(x);
}
