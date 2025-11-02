//
// Created by zhu on 2025/11/2.
//

//获取数组的最大值


#include <stdio.h>
//获取最大值
int getMax(int *arr, int size);
//计算数组长度
int getSize(int *arr) {
    return sizeof(arr)/sizeof(arr[0]);
}
int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int max=getMax(arr,getSize(arr));
    printf("最大值是：%d\n", max);
}
int getMax(int *arr, int size) {
    int max=arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    return max;
}
