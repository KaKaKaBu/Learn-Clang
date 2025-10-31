//
// Created by zhu on 2025/10/29.
//
#include <stdio.h>
#include <string.h>


struct Data
{
    int year;
    int month;
    int day;
};
struct EmpInfo
{
    char name[10];
    long long identification;
    struct Data data;
};
int main(void)
{
    struct EmpInfo *p;
    struct EmpInfo **pp;
    struct Data *p2;
    struct EmpInfo emp_info={"litiezhu",2022010640330,{2005,1,4}};
    p=&emp_info;
    p2=&(p->data);
    pp=(*p).data;
    printf("%s\n",(*p).name);
    strcpy((*p).name,"yangkaixiang");
    printf("%s\n",(*p).name);
    printf("%d",((*p).data).year);

}