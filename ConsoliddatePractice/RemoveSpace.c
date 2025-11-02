//
// Created by zhu on 2025/11/2.
//

//去除空格

#include <stdio.h>
#include <string.h>

void removeSpace(char *Str)
{
    int length=strlen(Str);
    int i=0,j=0;
    for (i=0;i<length;i++)
    {
        if (Str[i]!=' ')
        {
            Str[j++]=Str[i];
        }

    }
    Str[j]='\0';
}

int main(void)
{
    char str[]="Hello World";
    removeSpace(str);
    printf("%s",str);
}
