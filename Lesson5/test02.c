//
// Created by zhu on 2025/10/24.
//

/*第3题:通过指针修改变量编写程序，声明两个整型变量x=10和y=20，然后:
定义两个指针变量p1和p2
让p1指向x，p2指向y
通过p1把x的值改为30
通过p2把y的值改为40
输出x和y的新值*/

#include <stdio.h>

int main(void) {
    int x=10,y=20;
    int *p1=&x,*p2=&y;
    *p1=30;
    *p2=40;
    printf("x:%d\ty:%d\t",*p1,*p2);
}