//
// Created by zhu on 2025/10/24.
//

/*第4题:指针与数组基础编写程序，声明一个整型数组arr[3]={10,20,30}，然后:
定义一个指针变量p
让指针p指向数组的第一个元素
用指针输出第一个元素的值
让指针p指向数组的第二个元素用指针输出第二个元素的值*/

#include <stdio.h>
int main(void) {
    int arr[3]={10,20,30};
    int *p=arr;
    printf("%d\t",*p);
    printf("%d\t",*(p+1));
}