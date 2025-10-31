//
// Created by zhu on 2025/10/23.
//
//指向二位数组的指针
#include <stdio.h>
void PrintArray(int (*p)[4]);
int main() {
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("int a[%d][%d]：%d\t", i, j, a[i][j]);
        }
        putchar('\n');
    }
    int (*p)[4];
    p = a;
    printf("%p\n", p);
    printf("%p\n", *p); //*p代表数组中第0行的数组即a[0][0-3]
    printf("%p\n", *(p + 1)); //*(p+1)代表数组中第一行的数组即a[1][0-3]
    printf("%d\n", **(p + 1)); //**p代表第一行数组中第0个数即a[1][0]
    printf("%d\n", *(*(p + 1) + 1)); //**p代表第一行数组中第1个数即a[1][1]
    printf("%p\n",a[2]+1);

    PrintArray(a);

    return 0;
}
//使用二维数组的指针遍历二维数组
void PrintArray(int (*p)[4]) {
    for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            printf("a[%d][%d]=%d\t",i,j,*(*(p+i)+j));
        }
        putchar('\n');
    }
}
