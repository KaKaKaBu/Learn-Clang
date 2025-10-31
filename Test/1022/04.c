//
// Created by zhu on 2025/10/22.
//
//4、一个球从100m高度自由落下，每次落地后反跳回原高度的一半，再落下，再反弹。C语言编程求它在第10次落地时，共经过多少米，第10次反弹多高。
#include <stdio.h>
void test(double x);
int count=0;//计数
double sum;

int main() {
    test((100));
}
void test(double x) {
    for (int i=0;i<10;i++) {
        x/=2.00;
        sum+=(x*2);
        count++;
    }
    sum=sum+100-x-x;
    printf("第%d次反弹高度为%f,总路程为%f",count,x,sum);

}