//
// Created by zhu on 2025/11/2.
//
//打印数组函数

//通用打印数组函数

#include <stdio.h>

void printArray(void *arr,int size,int elementSize,char type);

int main() {
    int arrInt[5]={1,2,3,4,5};
    float arrFloat[5]={1.1,2.2,3.3,4.4,5.5};
    double arrDouble[5]={1.11,2.22,3.33,4.44,5.55};
    printf("整数数组：\n");
    printArray(arrInt,5,sizeof(int),'i');
    printf("浮点数组：\n");
    printArray(arrFloat,5,sizeof(float),'f');
    printf("双精度浮点数组：\n");
    printArray(arrDouble,5,sizeof(double),'d');
}

void printArray(void *arr,int size,int elementSize,char type) {
    for (int i = 0; i < size; i++) {
        if (type=='i') {
            printf("%d ", *((int *)arr + i));
        } else if (type=='f') {
            printf("%.2f ", *((float *)arr + i));
        } else if (type=='d') {
            printf("%.2lf ", *((double *)arr + i));
        }
    }
    printf("\n");
}