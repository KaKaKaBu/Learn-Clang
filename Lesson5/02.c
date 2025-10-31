//
// Created by zhu on 2025/10/24.
//

#include <stdbool.h>
#include <stdio.h>

void test01();

void test02();

void test03();

void test04();

void test05();

void test06();

void test07();

void test08();

void test09();

bool skip();

int main(void) {
    test04();
}

//使指针指向另一个值
void test01() {
    int a = 5, b = 8;
    int *p = &a;
    printf("%d\n", *p);
    p = NULL;
    p = &b;
    printf("%d\n", *p);
}

//使用指针交换变量
void test02() {
    int a, b;
    printf("请输入两个数");
    scanf("%d%d", &a, &b);
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    if (*p1 > *p2) {
        p1 = &a;
        p2 = &b;
    } else {
        p1 = &b;
        p2 = &a;
    }
    printf("%d\t%d\t", *p1, *p2);
}

void test03() {
    int n = 0;
    while (skip() && scanf("%d", &n) == 1) {
        printf("n:%d\n", n);
    }
}

bool skip() {
    scanf("%*[^0-9]");
    return true;
}

void test04() {
    int nums[7];
    int *p;
    p = nums;
    for (int i = 0; i < 7; i++) {
        *(p + i) = i;
        printf("%d\t",nums[i]);
    }

}

void test05() {
    int a=1,b=2,c=3,d=4,e=5,f=6;
    const int *p1=&a;
    int const *p2=&b;
    int* const p3=&c;

    p1=&d; //可以修改指针中存储的地址
    *p1=d; //无法分配给只读类型 const int
    p2=&e;//可以修改指针中存储的地址
    *p2=e;//无法修改指针所对应的变量的值
    /*前两种const优先与int结合使int值无法修改*/
    p3=&f;//int* const p3无法修改指针指向的地址
    *p3=f;//可以修改指针所对应的变量的值
    /*这种是因为const int*结合所代表的指针无法修改*/
}
