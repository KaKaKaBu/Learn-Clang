//
// Created by zhu on 2025/11/2.
//

//反转字符串


#include <stdio.h>
#include <string.h>

void reserverString( char * string)
{
    int length=strlen(string);
    int start=0,end=length-1;

    while (start<end)
    {
        char temp=string[start];
        string[start]=string[end];
        string[end]=temp;
        start++;
        end--;

    }


}

int main(void)
{
    char String[]="HelloWorld";

    reserverString(String);
    printf("%s",String);

}
