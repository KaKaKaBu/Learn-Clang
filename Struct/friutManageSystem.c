#include <stdio.h>
#include <string.h>
//
// Created by zhu on 2025/10/31.
//
/*定义水果结构体类型成员：水果名字，价格，数量
定义水果结构体数组，长度20，初始化三个水果数据
定义水果的显示，添加和删除函数，实现相应功能。
通过菜单选择，完成水果的显示，添加和删除*/


typedef struct
{
    char name[20];
    double price;
    int inventory;
} Fruit;

void showMenu();
void printList(Fruit* fruit);
Fruit* findFruit(Fruit* fruit);
void handleChoice(int choice, Fruit* fruit);
int countFruit(Fruit* fruit);
int countToFruit(Fruit* fruit, const char* name);
void insertFruit(Fruit* fruit);
void deleteFruit(Fruit* fruit);
void printList(Fruit* fruit)
{
    int i = 0;
    printf("\n=====当前的水果=====\n");
    printf("名称\t价格\t数量\n");
    for (Fruit* p = fruit; *(p->name) != '\0'; p++, i++)
    {
        printf("%s\t%lf\t%d\t\n", p->name, p->price, p->inventory);
    }
    printf("\n==================\n");
}


void showMenu()
{
    printf("\n=========== 水果管理系统 ===========\n");
    printf("1. 显示所有水果\n");
    printf("2. 添加新水果\n");
    printf("3. 删除水果\n");
    printf("4. 退出系统\n");
    printf("====================================\n");
    printf("请选择操作 (1-7): ");
}

int countFruit(Fruit* fruit)
{
    int count = 0;
    for (Fruit* p = fruit; *(p->name) != '\0'; p++)
        count++;
    return count;
}

int countToFruit(Fruit* fruit, const char* name)
{
    int count = 0;
    for (Fruit* p = fruit; *(p->name) != '\0'; p++)
    {
        if (strcmp(p->name, name) == 0) return count;
        count++;
    }

    return -1;
}


void insertFruit(Fruit* fruit)
{
    int i = countFruit(fruit);
    fruit += i;
    printf("请输入水果数据(水果名称，价格，库存)\n");
    scanf("%s %lf %d", fruit->name, &fruit->price, &fruit->inventory);
}

void deleteFruit(Fruit* fruit)
{
    Fruit temp = {0};
    printf("你选择了删除\n");
    Fruit* fruitInfo = findFruit(fruit);
    if (fruitInfo == NULL)
    {
        printf("删除操作取消。\n");
        return;
    }
    for (Fruit* p = fruitInfo; *(p->name) != '\0'; p++)
    {
        *p = *(p + 1);
        if (*((p + 1)->name) == '\0')
        {
            *p = temp;
            return;
        }
    }
}


Fruit* findFruit(Fruit* fruit)
{
    char name[20];
    printf("请输入水果名称\n");
    scanf("%s", name);
    int count = countToFruit(fruit, name);
    if (count == -1)
    {
        printf("未找到水果\n");
        return NULL;
    }
    printf("\n=====查找到的水果信息=====\n");
    printf("%s\t%lf\t%d\t\n",
           (fruit + count)->name,
           (fruit + count)->price,
           (fruit + count)->inventory);
    printf("\n=========================\n");
    return (fruit + count);
}

void handleChoice(int choice, Fruit* fruit)
{
    switch (choice)
    {
    case 1: printList(fruit);
        break;
    case 2: insertFruit(fruit);
        break;
    case 3: deleteFruit(fruit);
        break;
    default: break;
    }
}


int main(void)
{
    Fruit fruits[20] = {
        {"苹果", 2, 5},
        {"香蕉", 1.5, 20},
        {"橙子", 3.5, 10}
    };
    while (1)
    {
        int i=0;
        showMenu();
        scanf("%d",&i);
        if (i==4) return 0;
        handleChoice(i,fruits);
    }
}
