//
// Created by zhu on 2025/10/20.
//

/*使用ifdef,else,endif
 *ifndef,else,endif
 *if else endif
 * if,elif,endif
 */
#include<stdio.h>
#define A 1
#define B 2
#define C 5
#define D 11

int main(void) {
#ifdef A
    printf("A已被定义\n");
#else
    {
        printf("A没有被定义\n");
    }
#endif
#ifndef B
    printf("B没有被定义\n");
    #else
    printf("B已经被定义\n");
    #endif
#if C>5
    printf("被定义的值C大于5\n");
    #else
    printf("被定义的值C小于5\n");
    #endif
#if D>10&&A==1
    printf("D的值大于10且A的值为1\n");
#elif D>10||A==1
    printf("D的值大于10或A的值为1\n");
#endif


}
