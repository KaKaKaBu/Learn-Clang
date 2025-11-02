//
// Created by zhu on 2025/11/2.
//


//获取指定元素在数组中首次出现的位置

#include <stdio.h>
#include <string.h>

int findIndex(void *array,int size,int elementSize,void *element)
{
    for (int i=0;i<size;i++)
    {
        void *currentElement=(char *)array+i*elementSize;
        if (memcmp(currentElement,element,elementSize))
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int array[]={1,2,3,4,5};
    int intElement=3;
    int intIndex=findIndex(array,sizeof(array)/sizeof(array[0]),sizeof(int),&intElement);
    if (intIndex!=-1)
    {
        printf("%d\n",intIndex);
    }
    else
    {
        printf("元素不存在");
    }
}