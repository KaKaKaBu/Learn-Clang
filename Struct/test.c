//
// Created by zhu on 2025/10/28.
//
#define Len sizeof(struct Student)

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    double score;
    struct Student* next;
};


/*struct Student* creative02()
{
    int count = 0;
    struct Student* p2 = NULL;
    struct Student* head = NULL;
    struct Student* p1 = (struct Student*)malloc(Len);
    printf("input score");
    //单独为头指针赋值
    scanf("%lf", &p1->score);
    p1->id = ++count;
    p1->next = NULL;
    head = p1;
    if (p1->score == 0)
    {
        free(p1);
        return NULL;
    }
    while (1)
    {
        p2 = (struct Student*)malloc(sizeof(struct Student)); //为p2分配空间
        printf("please input score");
        scanf("%lf", &p2->score);
        if (p2->score == 0)
        {
            p1->next = NULL;
            free(p2);
            break;
        }
        else
        {
            p2->next = NULL;
            p2->id = ++count;
            p1->next = p2;
            p1 = p2;
        }
    }


    return head;
}*/ //复杂的方法；

struct Student* creative02()
{
    int count = 0;
    struct Student* tail = NULL; //尾指针
    struct Student* head = NULL; //头指针

    while (1)
    {
        struct Student* newNode = (struct Student*)malloc(Len);
        printf("input score");
        scanf("%lf", &newNode->score);
        if (newNode->score == 0)
        {
            free(newNode);
            break;
        }
        newNode->id = ++count;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            tail->next = newNode; //第二次循环时将上次循环的tail->next指向当前循环创建的newNode
        }
        tail = newNode; //此时tail等于当前循环的newNode
    }


    return head;
}//创建链表

void freelist(struct Student* head)
{
    while (head)
    {
        struct Student* temp = head;
        head = head->next;
        free(temp);
    }
}//释放空间

void printList(struct Student* head)
{
    struct Student* p1 = head;
    while (p1 != NULL)
    {
        printf("%d,%f\n", p1->id, p1->score);
        p1 = p1->next;
    }
}//打印链表

//更新操作不需要修改链表结构
void updateById(struct Student* head, int id, int score)
{
    struct Student* p = head;
    while (p->id != id)
    {
        if (p->next != NULL)p = p->next;
        else return;
    }
    //head->id==id
    p->score = score;
}//通过id更新数据

//添加在索引前放插入，若stu的id大于插入位置的id则放在后面，若小于，则放在前面
struct Student* insertById(struct Student* head, const int index, struct Student* stu)
{
    if (head == NULL) return NULL;
    //针对头指针的特殊处理
    if (index == head->id)
    {
        if (head->id >= stu->id) //头指针大于插入指针，插入头指针前边
        {
            stu->next = head;
            return stu;
        }
        else
        {
            stu->next = head->next; //注意顺序避免循环
            head->next = stu;
            return head;
        }
    }
    struct Student* p = head->next;
    struct Student* p_front = head;

    while (p_front->next != NULL)
    {
        if (p->id == index)
        {
            if (stu->id > p->id)
            {
                stu->next = p->next;
                p->next = stu;
                return head;
            }
            else
            {
                p_front->next = stu;
                stu->next = p;
                return head;
            }
        }
        p = p->next;
        p_front = p_front->next;
    }

    return head;
}//通过id插入

struct Student* deleteById(struct Student* head, const int index)
{
    if (head == NULL) return NULL;
    struct Student* p = head->next;
    struct Student* p_front = head;
    if (index == head->id)return p;
    while (p_front->next != NULL)
    {
        if (p->id == index) //找到对应的id后删除该节点；
        {
            p_front->next = p->next;
            return head;
        }
        else //否则继续遍历
        {
            p = p->next;
            p_front = p_front->next; //p_front始终指向p的前一个指针
        }
    }
    printf("没有找到要删除的节点\n");
    return head;
}//通过id删除

//fixme：此处返回值可能需要修改保持程序的健壮性
struct Student* queryById(struct Student* head, const int index)
{
    struct Student* p = head;
    while (p->next != NULL)
    {
        if (p->id == index) return p;
        else p = p->next;
    }
    return NULL;
}//通过id查询


struct Student* orderById(struct Student* head)
{
    //思路：遍历链表，将两个结构体的id进行比较，只替换id和score不破坏链表顺序
    struct Student *p = head, *q = head;
    int temp_id=0;
    double temp_score=0;
    while (q != NULL)
    {
        while (p->next != NULL)
        {
            if (p->id > p->next->id)
            {
                temp_id = p->id;
                temp_score = p->score;
                p->id = p->next->id;
                p->score = p->next->score;
                p->next->id = temp_id;
                p->next->score = temp_score;
            }
            p = p->next;
        }
        p=head;
        q=q->next;
    }


    return head;
} //通过id排序（使用冒泡法）

struct Student* orderByIdWithInsertion(struct Student* head)
{
    //思路：插入排序
    struct Student *temp =head;
    struct Student *p=head;


    return head;
} //通过id排序（使用插入排序法）


void reallocateId(struct Student *head)
{
    struct Student *p=head;
    int id=0;
    while (p!=NULL)
    {
        p->id=++id;
        p=p->next;
    }
}//重新分配id

int countStudent(struct Student *head)
{
    int count=0;
    struct Student *p=head;
    while (p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}//统计学生数量

double calcAvg(struct Student *head)
{
    double sum=0;
    struct Student *p=head;
    while (p!=NULL)
    {
        sum+=p->score;
        p=p->next;
    }
    return sum/countStudent(head);
}

int main(void)
{
    struct Student stu_1 = {.id = 2, .score = 70.5};
    struct Student* p1 = &stu_1;
    struct Student stu_2 = {.id = 6, .score = 82.3};
    struct Student stu_3 = {.id = 5, .score = 65.4};
    struct Student stu_4 = {.id = 3, .score = 20.1};
    struct Student* p2 = &stu_4;
    stu_1.next = &stu_2;
    stu_2.next = &stu_3;
    stu_3.next = &stu_4;
    stu_4.next=NULL;
    //struct Student* list = creative02();
    printf("======original=======\n");
    printList(p1);
    // printf("\n====update=====\n");
    // updateById(p1, 2, 70);
    // printList(p1);
    // printf("\n=====insert=====\n");
    // p1 = insertById(p1, 2, p2);
    // printList(p1);
    // printf("\n======delete=====\n");
    // p1 = deleteById(p1, 1);
    // printList(p1);
    // printf("=====query======\n");
    // struct Student* query = queryById(p1, 2);
    // if (query != NULL)
    //     printf("%d,%lf\n", query->id, query->score);
    printf("=======order========\n");
    p1=orderById(p1);
    printList(p1);
    printf("=======reallocate========\n");
    reallocateId(p1);
    printList(p1);
    printf("=======count========\n");
    printf("%d\n",countStudent(p1));
    printf("=======calcAvg========\n");
    printf("%lf",calcAvg(p1));

    //freelist(p1);
}
