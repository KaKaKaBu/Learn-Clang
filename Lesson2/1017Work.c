//
// Created by zhu on 2025/10/17.
//
//从1加到100
#include <stdio.h>

int reverseNum(int num );

int main(void) {
    int sum = 0;
    int k = 1;
    int i = 1;
    //for循环写法
    for (int j = 1; j <= 100; j++) {
        sum = sum + j;
    }
    printf("for循环%d\n", sum);

    //while循环写法
    sum = 0;
    i = 1;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("while循环%d\n", sum);

    //do-while循环
    sum = 0;
    i = 0;
    do {
        sum += i;
        i++;
    } while (i <= 100);

    printf("do-while循环%d\n", sum);

    //1-100中输出个位是7的或者是7的倍数的数输出

    printf("1-100中输出个位是7的或者是7的倍数的数输出\n");
    for (int a = 1; a <= 100; a++) {
        if (a >= 7 && (a % 7 == 0 || a % 10 == 7)) {
            printf("%d\t", a);
        }
    }
    putchar('\n');

    //1-1000回文数: 111,121,131,141,222,212,232...正着读倒着读都一样
    printf("1-1000回文数: 111,121,131,141,222,212,232...正着读倒着读都一样\n");
    int count = 0;

    for (int a = 1; a <= 1000; a++) {
        int original = a;
        int reverse = 0;
        int temp = a;

        while (temp > 0) {
            reverse = reverse * 10 + temp % 10;
            temp /= 10;
        }

        if (original == reverse) {
            printf("%d\t", original);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    putchar('\n');

    //1900-2100所有的闰年: 能被4整除，但是不能被100整除，或者能被400整除的就是闰年

    printf("1900-2100所有的闰年: 能被4整除，但是不能被100整除，或者能被400整除的就是闰年\n");
    count=0;
    for (int year = 1900; year <= 2100; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    putchar('\n');

    //1-100之间素数: 除了1和这个数本身，不能被其他任何数整除的数
    printf("1-100之间素数: 除了1和这个数本身，不能被其他任何数整除的数\n");

    count = 0;

    for (int num = 2; num <= 100; num++) {
        int isPrime = 1;
        for (int a = 2; a < num; a++) {
            if (num % a == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d\t ", num);
            count++;
            if (count % 10 == 0) {
                if (count==10)
                    printf("已经有十个数\n");
                printf("\n");
            }
        }
    }
    putchar('\n');


    //循环输入5个数,求最大最小值
    printf("循环输入5个数,求最大最小值\n");

    int num=0,max=0,min=0;
    for (int a = 0; a < 5; a++) {
        printf("输入第%d个数: ", a + 1);
        scanf("%d", &num);

        if (a == 0) {
            max = num;
            min = num;
        } else {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
    }

    printf("\n最大值: %d\n", max);
    printf("最小值: %d\n", min);

    int score;
    count = 0;

    printf("循环输入5个分数，统计80分以上的人数\n");
    printf("请输入5个分数：\n");
    for (int a = 0; a < 5; a++) {
        printf("输入第%d个分数: ", a + 1);
        scanf("%d", &score);
        if (score >= 80) {
            count++;
        }
    }
    printf("\n80分以上的人数: %d\n", count);

    //双重循环输出四个方向的三角形星星:

    // 1. 左下三角形
    printf("1. 左下三角形：\n");
    for (int a = 1; a <= 5; a++) {
        for (int j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 2. 左上三角形
    printf("2. 左上三角形：\n");
    for (int a = 5; a >= 1; a--) {
        for (int j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 3. 右下三角形
    printf("3. 右下三角形：\n");
    for (int a = 1; a <= 5; a++) {
        for (int j = 1; j <= 5 - a; j++) {
            printf(" ");
        }
        for (int j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 4. 右上三角形
    printf("4. 右上三角形：\n");
    for (int a = 5; a >= 1; a--) {
        for (int j = 1; j <= 5 - a; j++) {
            printf(" ");
        }
        for (int j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }


}


