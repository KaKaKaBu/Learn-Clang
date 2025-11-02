//
// Created by zhu on 2025/11/2.
//

#include <stdio.h>

void bubbleSort(void *arr[],int size,size_t elementSize, int (*cmp)(const void*,const void*))
{
    for (int i=0;i<size-1;++i)
    {
        for (int j=0;j<size-i-1;++j)
        {
            if (cmp(arr[j],arr[j+1])>0)
            {
                void *temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int compareInt(const void *a,const void *b)
{
    return (*(int *)a)-(*(int *)b);
}
int compareDouble(const void *a,const void *b)
{
    return ((*(double *)a)-(*(double *)b))>0?1:-1;
}
int main(void)
{
    int arrayInt[]={1,2,4,6,3,7};
    void *intPtrArray[6];
    for (int i=0;i<6;++i)
    {
        intPtrArray[i]=&arrayInt[i];
    }
    bubbleSort(intPtrArray,sizeof(arrayInt)/sizeof(arrayInt[0]),sizeof(int),compareInt);
    printf("整数升序后排序的数组：\n");
    for (int i=0;i<6;++i)
    {
        printf("%d",*((int *)intPtrArray[i]));
    }
    return 0;
}