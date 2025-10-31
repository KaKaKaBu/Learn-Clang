//
// Created by zhu on 2025/10/24.
//
#include <stdint.h>
#include <stdio.h>
#include <string.h>
/*字符串单词反转
编写一个函数，使用指针将字符串中的每个单词进行反转，但保持单词顺序不变。
要求:
在main函数中定义一个字符串
编写反转函数，使用指针操作反转每个单词
示例:输入"hello world"→ 输出"olleh dlrow"*/
char *divideStr(char const *Str);

int main(void) {
    char str[INT8_MAX] = "Hello World";
    char reverseStr[INT8_MAX];
    char dividedStr[10][10];
    char *p1 = str, *p3 = reverseStr;
    int i = 0;
    // printf("输入一个字符串");
    // scanf("%[^'\n']", str);
    dividedStr = divideStr(str);
    printf("%s\n", dividedStr);
    i = 0;
    char *p2 = dividedStr + strlen(dividedStr) - 1;
    for (p2; p2 >= dividedStr; p2--) {
        reverseStr[i] = *p2;
        i++;
    }
    reverseStr[i] = ' ';
    printf("%s\n", reverseStr);
}

char *divideStr(const char  *Str) {
    int i = 0;
    char j[INT8_MAX];
    for (Str; p1 < str + strlen(str) - 1; p1++) {
        if (*p1 == ' ') break;
        j[i] = *(p1);
        i++;
    }
    return j;
}
