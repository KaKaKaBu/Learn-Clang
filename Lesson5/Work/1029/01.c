#include <stdio.h>
//
// Created by zhu on 2025/10/29.
//
/*2.定义商品结构体类型，成员：商品名字，价格，数量
  定义两个商品结构体类型的变量，通过输入方式为商品结构体变量赋值
3.定义商品结构体指针类型的变量，指向已创建好的商品结构体变量数据，
   通过指针将目标商品的价格加100元，并使用指针输出商品数据
4.定义函数，接收商品结构体指针，不允许通过指针修改传入的原始数据，
   在函数内通过指针输出传入的商品数据*/
typedef struct
{
    char name[20];
    int price;
    int number;
} Goods;

void test(const Goods* goods)
{
    printf("%s %d %d", goods->name, goods->price, goods->number);
}

int main(void)
{
    Goods good = {"哇哈哈", 4, 10};
    Goods good_2 = {"脆司令", 1, 20};

    printf("请输入商品1数据");
    scanf("%s %d %d", good.name, &good.price, &good.number);
    printf("请输入商品2数据");
    scanf("%s %d %d", good_2.name, &good_2.price, &good_2.number);
    printf("%s %d %d\n", good.name, good.price, good.number);
    printf("%s %d %d\n", good_2.name, good_2.price, good_2.number);
    Goods* p = &good;
    p->price += 100;
    printf("%s %d %d", p->name, p->price, p->number);
}
