//
// Created by zhu on 2025/10/28.
//

#include <stdio.h>

void callback(int x,int y,int (*p)(int a,int b))
{
    p(x,y);
    printf("callback被调用");

}
int add(int x,int y)
{
    printf("add被调用\n");
    return x+y;
}
int main(void)
{
    int (*p)(int x,int y);
    p=add;
    int res=p(10,20);
    printf("%d\n",res);
    callback(10,20,add);
}
