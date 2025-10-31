//
// Created by zhu on 2025/10/27.
//

#include <stdio.h>
#include <string.h>
// todo:5.字符串反转函数：该函数接收一个字符指针参数，接收传入的字符数组，实现将字符串反转的效果

void reserveStr(const char* str);
int main(void)
{
    char str[]="Hello World";
    reserveStr(str);
}
void reserveStr(const char* str)
{
    const int strLength=strlen(str);
    char reservedStr[strLength+1];
    char *p_front=reservedStr;
    const char *p_back=str+strLength-1;
    while (p_back>=str)
    {
        *p_front++=*p_back--;
    }
    *(p_front+1)='\0';
    printf("originalStr:%s\n",str);
    printf("reservedStr:%s\n",reservedStr);
}