//
// Created by zhu on 2025/10/21.
//

/*笔记：
 *在C语言中调用函数属于值传递,
 *即在传递时创建了一个当前变量的副本，
 *所以在传入的变量在发生变化后原始变量并不会发生变化，
 *指针在传递时也是创建了一个指针的副本，
 *指针本身和指针的副本指向了相同的原始变量所以可以对原始变量进行修改*/

#include <stdio.h>

void add(int x, int y); //值相加

void ptrAdd(int *x, int *y); //指针的方法

void checkPtr(int *x); //使用指针的指针查看传递方法

int main(void) {
    int real_x = 1, real_y = 2;
    add(real_x, real_y);
    printf("%d\n", real_x); //在函数中的加减并没有影响到real_x
    //使用指针
    int *x_ptr = &real_x;
    int *y_ptr = &real_y;
    ptrAdd(x_ptr, y_ptr);
    printf("%d\n", real_x); //原始变量被修改
    int **ptr = &x_ptr;
    printf("%p\n", ptr);
    checkPtr(x_ptr);
    return 0;
}

void add(int x, int y) {
    x = x + y;
}

void ptrAdd(int *x, int *y) {
    printf("%p\t%p\t", x, y);
    *x = *x + *y;
}

void checkPtr(int *x) {
    int **x_ptr = &x;
    printf("%p\n", x_ptr);
}
