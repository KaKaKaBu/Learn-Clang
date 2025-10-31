#include <stdio.h>
//
// Created by zhu on 2025/10/30.
//
/*定义一个商品结构体，成员包含：商品名字，价格，商品数量。
定义该结构体类型的变量，使用输入的方式，为结构体变量赋值，然后输出成员数据。
定义该结构体类型的指针，指向上面定义的变量，通过指针修改商品名字，价格，数量，然后使用指针输出成员数据。*/
typedef struct
{
    char name[10];
    int price;
    int number;
}Goods;

int main(void)
{
    Goods goods;
    Goods *p;
    p=&goods;
    printf("请输入商品数据\n名称\t价格\t数量\t\n");
    scanf("%s %d %d",goods.name,&goods.price,&goods.number);
    printf("%s\t%d\t%d\t",goods.name,goods.price,goods.number);

    printf("\n============\n");
    printf("请输入商品数据\n名称\t价格\t数量\t\n");
    scanf("%s %d %d",p->name,&p->price,&p->number);
    printf("%s\t%d\t%d\t",p->name,p->price,p->number);
}