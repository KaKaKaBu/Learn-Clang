#include <stdio.h>
//
// Created by zhu on 2025/10/30.
//
typedef struct
{
    char name[20];
    int price;
    int number;
    char addr[20];
} Goods;

int main(void)
{
    Goods goods[3] = {
        {"卫龙", 2, 10, "漯河"},
        {"AD钙", 3, 5, "不知道"},
        {"魔法士", 1, 20, "不知道"}
    };
    printf("\n========sizeof=======\n");
    printf("%llu\n", sizeof(goods));
    printf("========商品数据=========\n");
    printf("名称\t价格\t数量\t产地\t\n");
    for (Goods* p = goods; p < goods + 3; p++)
    {
        printf("%s\t%d\t%d\t%s\t\n", p->name, p->price, p->number, p->addr);
    }
    for (Goods* p = goods; p < goods + 3; p++)
    {
        printf("\n======请输入商品数据=======\n");
        scanf("%s %d %d %s", p->name, &p->price, &p->number, p->addr);
    }
    printf("名称\t价格\t数量\t产地\t\n");
    for (Goods* p = goods; p < goods + 3; p++)
        printf("%s\t%d\t%d\t%s\t\n", p->name, p->price, p->number, p->addr);

}
