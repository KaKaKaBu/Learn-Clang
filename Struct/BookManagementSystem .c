//
// Created by zhu on 2025/10/30.
//

#include <stdio.h>
#include <string.h>
/*1.定义图书结构体类型，成员:书名，作者，出版社，价格。
  定义图书结构体数组，并初始化3个图书数据。
  定义图书结构体指针，指向数组，使用指针遍历数组，输出图书信息
2.基于第一题的图书结构体数组数据，找出价格最高的图书，价格最低的图书，并输出。
3.实现图书的查询，添加，修改，删除功能
4.定义一个共用体类型，成员为: char,int,short。定义共用体类型变量，为变量赋值并输出
5.定义枚举类型用于表示交通灯状态：红灯，绿灯，黄灯。
  定义交通灯类型的变量，存储某一个交通灯的值，使用条件判断，确定是否可以过马路
6.使用typedef定义一个无符号单字节类型的别名，使用该别名定义无符号单字节的变量，存储合适的数据，并输出
7.整理思维导图笔记*/


// 1. 定义图书结构体类型
typedef struct {
    char name[50];        // 书名
    char author[30];      // 作者
    char publisher[50];   // 出版社
    double price;          // 价格
} Book;

// 函数声明
int countBooks(Book* books);
int findBookIndex(Book* books, const char* name);
void addBook(Book* books);
Book* searchBook(Book* books);
void updateBook(Book* books);
void deleteBook(Book* books);
void printAllBooks(Book* books);
void findPriceExtremes(Book* books);
void showMenu();
void handleChoice(int choice, Book* books);

int main(void) {
    // 1. 定义图书结构体数组，并初始化3个图书数据
    Book books[100] = {
        {"C程序设计", "谭浩强", "清华大学出版社", 45.5},
        {"数据结构", "严蔚敏", "清华大学出版社", 38.0},
        {"算法导论", "Thomas Cormen", "机械工业出版社", 128.0}
    };

    int choice;

    printf("欢迎使用图书管理系统！\n");

    while(1) {
        showMenu();
        printf("请选择操作 (1-7): ");
        scanf("%d", &choice);

        if(choice == 7) {
            printf("感谢使用图书管理系统，再见！\n");
            break;
        }

        handleChoice(choice, books);

        // 清空输入缓冲区
        while(getchar() != '\n');
    }

    return 0;
}

// 统计图书数量
int countBooks(Book* books) {
    int count = 0;
    for (Book* p = books; p->name[0] != '\0'; p++) {
        count++;
    }
    return count;
}

// 根据书名查找图书索引
int findBookIndex(Book* books, const char* name) {
    int count = 0;
    for (Book* p = books; p->name[0] != '\0'; p++) {
        if (strcmp(name, p->name) == 0) {
            return count;
        }
        count++;
    }
    return -1;
}

// 添加图书
void addBook(Book* books) {
    int i = countBooks(books);
    if (i >= 100) {
        printf("图书库已满，无法添加新图书！\n");
        return;
    }

    Book* book = books + i;
    printf("请输入图书信息：\n");
    printf("书名: ");
    scanf("%s", book->name);
    printf("作者: ");
    scanf("%s", book->author);
    printf("出版社: ");
    scanf("%s", book->publisher);
    printf("价格: ");
    scanf("%lf", &book->price);

    printf("图书添加成功！\n");
}

// 查找图书
Book* searchBook(Book* books) {
    char name[50];
    printf("请输入要查找的书名: ");
    scanf("%s", name);

    int index = findBookIndex(books, name);
    if (index == -1) {
        printf("未找到图书《%s》\n", name);
        return NULL;
    }

    Book* book = books + index;
    printf("\n===== 查找到的图书信息 =====\n");
    printf("书名: %s\n", book->name);
    printf("作者: %s\n", book->author);
    printf("出版社: %s\n", book->publisher);
    printf("价格: %.2f\n", book->price);
    printf("============================\n");

    return book;
}

// 修改图书信息
void updateBook(Book* books) {
    Book* book = searchBook(books);
    if (book == NULL) {
        printf("修改操作取消。\n");
        return;
    }

    printf("请输入新的图书信息：\n");
    printf("书名: ");
    scanf("%s", book->name);
    printf("作者: ");
    scanf("%s", book->author);
    printf("出版社: ");
    scanf("%s", book->publisher);
    printf("价格: ");
    scanf("%lf", &book->price);

    printf("图书信息修改成功！\n");
}

// 删除图书
void deleteBook(Book* books) {
    char name[50];
    printf("请输入要删除的书名: ");
    scanf("%s", name);

    int index = findBookIndex(books, name);
    if (index == -1) {
        printf("未找到图书《%s》\n", name);
        return;
    }

    int total = countBooks(books);
    for (int i = index; i < total - 1; i++) {
        books[i] = books[i + 1];
    }

    // 清空最后一个元素
    strcpy(books[total - 1].name, "");
    strcpy(books[total - 1].author, "");
    strcpy(books[total - 1].publisher, "");
    books[total - 1].price = 0.0;

    printf("图书删除成功！\n");
}

// 打印所有图书信息
void printAllBooks(Book* books) {
    int count = countBooks(books);
    if (count == 0) {
        printf("图书库为空！\n");
        return;
    }

    printf("\n===== 所有图书信息 =====\n");
    printf("序号\t书名\t\t作者\t\t出版社\t\t价格\n");
    printf("------------------------------------------------------------\n");

    // 1. 使用指针遍历数组，输出图书信息
    Book* p = books;
    for (int i = 0; i < count; i++, p++) {
        printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n",
               i + 1, p->name, p->author, p->publisher, p->price);
    }
    printf("========================\n");
}

// 2. 找出价格最高和最低的图书
void findPriceExtremes(Book* books) {
    int count = countBooks(books);
    if (count == 0) {
        printf("图书库为空！\n");
        return;
    }

    Book* minBook = books;
    Book* maxBook = books;
    Book* p = books;

    for (int i = 0; i < count; i++, p++) {
        if (p->price < minBook->price) {
            minBook = p;
        }
        if (p->price > maxBook->price) {
            maxBook = p;
        }
    }

    printf("\n===== 价格最高的图书 =====\n");
    printf("书名: %s\n", maxBook->name);
    printf("作者: %s\n", maxBook->author);
    printf("出版社: %s\n", maxBook->publisher);
    printf("价格: %.2f\n", maxBook->price);

    printf("\n===== 价格最低的图书 =====\n");
    printf("书名: %s\n", minBook->name);
    printf("作者: %s\n", minBook->author);
    printf("出版社: %s\n", minBook->publisher);
    printf("价格: %.2f\n", minBook->price);
    printf("==========================\n");
}

// 显示菜单
void showMenu() {
    printf("\n=========== 图书管理系统 ===========\n");
    printf("1. 显示所有图书\n");
    printf("2. 添加新图书\n");
    printf("3. 查找图书\n");
    printf("4. 修改图书信息\n");
    printf("5. 删除图书\n");
    printf("6. 查找价格最高/最低的图书\n");
    printf("7. 退出系统\n");
    printf("====================================\n");
}

// 处理用户选择
void handleChoice(int choice, Book* books) {
    switch (choice) {
        case 1:
            printf("\n>>> 显示所有图书\n");
            printAllBooks(books);
            break;
        case 2:
            printf("\n>>> 添加新图书\n");
            addBook(books);
            break;
        case 3:
            printf("\n>>> 查找图书\n");
            searchBook(books);
            break;
        case 4:
            printf("\n>>> 修改图书信息\n");
            updateBook(books);
            break;
        case 5:
            printf("\n>>> 删除图书\n");
            deleteBook(books);
            break;
        case 6:
            printf("\n>>> 查找价格最高/最低的图书\n");
            findPriceExtremes(books);
            break;
        default:
            printf("\n无效的选择，请重新输入！\n");
            break;
    }
}