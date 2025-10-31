//
// Created by zhu on 2025/10/24.
//

/*定义一个整形数组a,长度为7，输入数值自定。通过指针变量找出数组元素的最大值和最小值。*/

#include <stdint.h>
#include <stdio.h>


int count = 0;

int main(void) {
    long long min = INT64_MAX, max = INT64_MIN;
    int a[7] = {7, 2, 3, 11, 5, 6, 1};
    for (int *p = a; p < a + 7; p++) {
        if (*p > max)
            max = *p;
        if (*p < min)
            min = *p;
    }
    printf("max is %d\nmin is %d\n", max, min);
    //排序
    for (int *q = a; q < a + 7; q++)
        for (int *p = a; p < a + 7 - (q - a); p++) {
            int temp = *(p + 1);
            if (temp < *p) {
                *(p + 1) = *p;
                *p = temp;
            }
            count++;
        }
    for (int *p = a; p < a + 7; p++) {
        printf("%d\t", *p);
    }
    printf("\ncount is %d\n", count);
}
