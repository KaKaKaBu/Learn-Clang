//
// Created by zhu on 2025/10/30.
//

#include <stdio.h>

void insertion_sort(int arr[], int len){
    int i,j,key;
    for (i=1;i<len;i++){
        key = arr[i];
        j=i-1;
        while((j>=0) && (arr[j]>key)) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main(void)
{
    int array[5]={3,5,2,7,1};
    int len=5;
    insertion_sort(array,len);
}