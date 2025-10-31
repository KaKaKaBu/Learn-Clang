//
// Created by zhu on 2025/10/30.
//

#include <stdio.h>

// 定义共用体类型
union Data {
    char c;
    int i;
    short s;
};

int main() {
    // 定义共用体变量
    union Data data;

    // 为字符成员赋值并输出
    data.c = 'A';
    printf("字符成员的值: %c\n", data.c);
    printf("字符成员的ASCII码: %d\n", data.c);

    // 为整数成员赋值并输出
    data.i = 12345;
    printf("整数成员的值: %d\n", data.i);

    // 为短整数成员赋值并输出
    data.s = 100;
    printf("短整数成员的值: %d\n", data.s);

    // 演示共用体特性：共享内存空间
    printf("\n--- 共用体内存共享演示 ---\n");
    data.c = 'X';
    printf("赋值字符 'X' 后:\n");
    printf("字符成员: %c (ASCII: %d)\n", data.c, data.c);
    printf("整数成员: %d (可能已改变)\n", data.i);
    printf("短整数成员: %d (可能已改变)\n", data.s);

    return 0;
}