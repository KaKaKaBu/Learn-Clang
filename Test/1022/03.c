#include <stdio.h>
//
// Created by zhu on 2025/10/22.
//
int test(int x,int y);
int main(void) {
    int a,count;
    printf("输入数字a和计算次数count");
    scanf("%d%d",&a,&count);
    printf("sum is %d",test(a,count));

}
int test(int x,int y) {
    int sum=0;
    int temp=0;
    temp=x;
    for (int i=0;i<y;i++) {
        sum+=x;
        x=x*10+temp;
    }
    return sum;
}