#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverseNum(int num);
void printRevers(int num );




int main() {
    // int a;
    // printf("请输入一个数字");
    // scanf_s("%d",&a);
    // printf("个\t十\t百\t千\t万\t\n");
    // printRevers(a);
    // return 0;

    int score;
    // scanf_s("%d", &score);
    //
    // switch (score) {
    //     case 0 ... 60:
    //         printf("F");
    //         break;
    //     case 60 ... 70 :
    //         printf("E");
    //         break;
    // }
    int k=0;
    for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            k++;
        }
    }
    printf("%d\n", k);
    return 0;
}

void  reverseNum(int num) {
    if (num == 0) {
        return;
    }
    printf("%d\t", num%10);
     reverseNum(num/10);
}

void printRevers(int num ) {
    reverseNum(num);
    printf("\n");
}




