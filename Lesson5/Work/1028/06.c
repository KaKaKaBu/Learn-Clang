#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
// Created by zhu on 2025/10/29.
//
/*todo:6.定义字符指针，指向使用malloc函数分配的10个字符空间，并存储一个字符串数据，并输出。然后通过该指针修改字符串的首个字母，再次输出。最后释放指针空间。（注意:字符串最后有\0）
*/
int main(void)
{
    char* p = (char*)malloc(10 * sizeof(char));
    strcpy(p,"Hello C");
    printf("%s\n", p);
    p[0] = 'A';
    printf("%s", p);
    free(p);
}
