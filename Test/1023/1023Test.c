//
// Created by zhu on 2025/10/23.
//
//"1234567890" 'a' e''i' 'o' 'u'

//strchr

#include <stdio.h>
#include <string.h>

int main(void) {
    char nums[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

    char eng[5] = {'a', 'e', 'i', 'o', 'u'};
    char input[1000];
    int i=0;
    printf("输入一个字符串");
    // while (1) {
    //     scanf("%c",&input[i]);
    //     if (input[i]=='/n')
    //         break;
    //     i++;
    // }
    scanf("%[^\n]", input);
    // printf("%s",input);
    // printf("该字符包含数字");
    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; input[j] != '\0'; j++) {
    //         if (input[j] == nums[i])
    //             printf("%c,", input[j]);
    //     }
    // }
    //
    // putchar('\n');
    // printf("该字符包含元音字母");
    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; input[j] != '\0'; j++) {
    //         if (input[j] == eng[i])
    //             printf("%c,", input[j]);
    //     }
    // }
    printf("该字符包含数字");
    for (int i = 0; i < 10; i++) {
        char *findPosition = strchr(input, nums[i]);
        long long Position = findPosition - input;
        if (Position >= 0)
            printf("%c,", input[Position]);
    }
    putchar('\n');
    printf("该字符包含元音字母");
    for (int i = 0; i < 5; i++) {
        char *findPosition = strchr(input, eng[i]);
        long long Position = findPosition - input;
        if (Position >= 0)
            printf("%c,", input[Position]);
    }
}
