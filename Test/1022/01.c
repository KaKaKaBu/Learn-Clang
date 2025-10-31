//
// Created by zhu on 2025/10/22.
//

#include <stdio.h>

void printYue(int x);

int main(void) {
    int temp;
    printf("输入月份\n");
    scanf("%d", &temp);
    printYue(temp);
}

void printYue(int x) {
    switch (x) {
        case 1: {
            printf("January");
            break;
        }
        case 2: {
            printf("February");
            break;
        }
        case 3: {
            printf("March");
            break;
        }
        case 4: {
            printf("April");
            break;
        }
        case 5: {
            printf("May");
            break;
        }
        case 6: {
            printf("June");
            break;
        }
        case 7: {
            printf("July");
            break;
        }
        case 8: {
            printf("August");
            break;
        }
        case 9: {
            printf("September");
            break;
        }
        case 10: {
            printf("October");
            break;
        }
        case 11: {
            printf("November");
            break;
        }
        case 12: {
            printf("December");
            break;
        }
        default: printf("错误的输入");
    }
}
