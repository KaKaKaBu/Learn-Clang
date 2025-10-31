//
// Created by zhu on 2025/10/24.
//

/*第5题:指针的简单移动编写程序，声明一个整型数组nums[5]={2,4,6,8,10}，然后
定义指针p并让它指向数组开头
输出p当前指向的值
让p指向下一个元素，输出这个值
让p指向再下一个元素，输出这个值
让p指回第一个元素，输出确认*/
#include<stdio.h>
int main(void){
    int num[5]={2,4,6,8,10};
    int *p=num;
    printf("%d\n",*p);
    printf("%d\n",*++p);
    printf("%d\n",*++p);
    p=num;
    printf("确认\n*p:%d",*p);
}