//
// Created by zhu on 2025/10/30.
//
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int price;
    int inventory;
} Product;

typedef struct
{
    char name[20];
    int price;
    int inventory;
} ShopList;

int countProduct(Product* product);//计数

int countToProduct(Product* product, const char* name);//查找位置

void insertProduct(Product* product);//插入数据

Product* findProduct(Product* product);//查找商品

void updateProduct(Product* product);//更新数据

void deleteProduct(Product* product);//删除数据

void printList(Product* product);//打印列表

int sellProduct(Product* product);//出售商品

void printShopList(ShopList* shop_list);//打印购物车

void pay(const int sum);//支付

void showMenu();// 菜单函数

void handleChoice(int choice, Product* products);// 处理用户选择的函数





//////
int main(void)
{
    Product products[100] = {
        {"wahaha", 10, 3},
        {"latiao", 2, 20},
        {"adgai", 3, 10}
    };

    int choice;

    printf("欢迎使用商品管理系统！\n");

    while(1) {
        showMenu();
        scanf("%d", &choice);

        if(choice == 7) {
            break;
        }

        handleChoice(choice, products);

        // 清空输入缓冲区
        while(getchar() != '\n');
    }

    return 0;
}

int countToProduct(Product* product, const char* name)
{
    int count = 0;
    for (Product* p = product; *(p->name) != '\0'; p++)
    {
        if (strcmp(name, p->name) == 0) { return count; }
        count++;
    }
    return -1;
}

void insertProduct(Product* product)
{
    int i = countProduct(product);
    product += i;
    printf("请输入商品数据(商品名称，价格，库存)\n");
    scanf("%s %d %d", product->name, &product->price, &product->inventory);
}

void deleteProduct(Product* product)
{
    Product temp = {0};
    printf("你选择了删除\n");
    Product* productInfo = findProduct(product);
    if (productInfo == NULL)
    {
        printf("删除操作取消。\n");
        return;
    }
    for (Product* p = productInfo; *(p->name) != '\0'; p++)
    {
        *p = *(p + 1);
        if (*((p + 1)->name) == '\0')
        {
            *p = temp;
            return;
        }
    }
}

void updateProduct(Product* product)
{
    Product* productInfo = findProduct(product);
    if (productInfo == NULL)
    {
        printf("修改操作取消。\n");
        return;
    }
    printf("请输入新的商品信息\n");
    scanf("%s %d %d", productInfo->name, &productInfo->price, &productInfo->inventory);
}

Product* findProduct(Product* product)
{
    char name[20];
    printf("请输入商品名称\n");
    scanf("%s", name);
    int count = countToProduct(product, name);
    if (count == -1)
    {
        printf("未找到商品\n");
        return NULL;
    }
    printf("\n=====查找到的商品信息=====\n");
    printf("Product[%d]\t%s\t%d\t%d\t\n",
           count, (product + count)->name,
           (product + count)->price,
           (product + count)->inventory);
    printf("\n=========================\n");
    return (product + count);
}

int countProduct(Product* product)
{
    int count = 0;
    for (Product* p = product; *(p->name) != '\0'; p++)
    {
        count++;
    }
    return count;
}

void printList(Product* product)
{
    int i = 0;
    printf("\n=====当前的商品表=====\n");
    printf("序号\t商品名称\t价格\t库存\n");
    for (Product* p = product; *(p->name) != '\0'; p++, i++)
    {
        printf("Prodcut[%d]\t%s\t%d\t%d\t\n", i, p->name, p->price, p->inventory);
    }
    printf("\n==================\n");
}

void printShopList(ShopList* shop_list)
{
    int i = 0;
    printf("\n=====当前购买的的商品表=====\n");
    printf("序号\t商品名称\t价格\t数量\n");
    for (ShopList* p = shop_list; *(p->name) != '\0'; p++, i++)
    {
        printf("Prodcut[%d]\t%s\t%d\t%d\t\n", i, p->name, p->price, p->inventory);
    }
    printf("\n==================\n");
}

int sellProduct(Product* product)
{
    ShopList shop_list[100] = {{0}};
    printf("你选择了购买商品\n");
    int sum = 0;
    int shopCount = 0;
    while (1)
    {
        int number = 0;
        int i = 0;
        printf("\n--- 购买菜单 ---\n");
        printf("0 - 添加商品到购物车\n");
        printf("1 - 结账\n");
        printf("2 - 查看当前总金额\n");
        printf("3 - 查看购物清单\n");
        printf("4 - 返回主菜单\n");
        printf("请选择: ");
        scanf("%d", &i);
        if (i == 0)
        {
            Product* productInfo = findProduct(product);
            if (productInfo == NULL)
            {
                continue;
            }
            printf("请输入购买的数量");
            scanf("%d", &number);
            if (number > productInfo->inventory)
            {
                printf("商品数量不够，无法购买\n");
                continue;
            }
            strcpy(shop_list[shopCount].name, productInfo->name);
            shop_list[shopCount].price = productInfo->price;
            shop_list[shopCount].inventory = number;
            shopCount++;
            sum += productInfo->price * number;
        }
        else if (i == 1)break;
        else if (i == 2)
        {
            printf("当前总金额为%d\n", sum);
        }
        else if (i == 3)
        {
            printShopList(shop_list);
        }
        else return -1;
    }
    return sum;
}

void pay(const int sum)
{
    int money = 0;
    if (sum == -1)
    {
        return;
    }
    printf("请输入支付的金额");
    scanf("%d", &money);
    if (money < sum)
    {
        printf("金额不足请重新支付\n");
        pay(sum);
    }
    printf("欢迎下次光临\n");
}

void showMenu()
{
    printf("\n=========== 商品管理系统 ===========\n");
    printf("1. 显示所有商品\n");
    printf("2. 添加新商品\n");
    printf("3. 查找商品\n");
    printf("4. 修改商品信息\n");
    printf("5. 删除商品\n");
    printf("6. 购买商品\n");
    printf("7. 退出系统\n");
    printf("====================================\n");
    printf("请选择操作 (1-7): ");
}

void handleChoice(int choice, Product* products)
{
    switch (choice)
    {
    case 1:
        printf("\n>>> 显示所有商品\n");
        printList(products);
        break;
    case 2:
        printf("\n>>> 添加新商品\n");
        insertProduct(products);
        printf("商品添加成功！\n");
        break;
    case 3:
        printf("\n>>> 查找商品\n");
        findProduct(products);
        break;
    case 4:
        printf("\n>>> 修改商品信息\n");
        updateProduct(products);
        printf("商品信息修改成功！\n");
        break;
    case 5:
        printf("\n>>> 删除商品\n");
        deleteProduct(products);
        printf("商品删除成功！\n");
        break;
    case 6:
        printf("\n>>> 购买商品\n");
        int sum = sellProduct(products);
        pay(sum);
        break;
    case 7:
        printf("\n感谢使用商品管理系统，再见！\n");
        break;
    default:
        printf("\n无效的选择，请重新输入！\n");
        break;
    }
}