//
// Created by zhu on 2025/11/2.
//

#include <stdio.h>

void increaseByTen(int *num);
void modifyByValue(int num);
void printArray(int *num, int size);

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printArray(arr,10);

    int a=10;
    modifyByValue(a);
    printf("主函数：%d\n", a);
    increaseByTen(&a);
    printf("主函数：%d\n", a);
}

void printArray(int *num, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}
 void increaseByTen(int *num) {
    *num*=*num;
    printf("函数内部modifyByPoint%d\n", *num);

}

void modifyByValue(int num) {
    num*=num;
    printf("函数内部modifyByValue：%d\n", num);
}