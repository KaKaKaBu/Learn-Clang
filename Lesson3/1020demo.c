//
// Created by zhu on 2025/10/20.
//
#include <stdio.h>
#include <string.h>
#define PI 3.1415926
#define S(r) PI*r*r

char* StringCopy(char* dest,char* source);

int main() {
	/*int a;
	printf("???????");
	scanf("%d",&a);
	if (a<0) {
	    printf("?????????");
	    return 0;
	}
	int area = S(a);
	printf("????????%d",area)*/
	;

	char str[4] = "john";
	for (size_t a = 0; a < strlen(str); a++) {
		printf("%c\n", str[a]);
	}
	printf("%s\n", str);

	char str_1[4];
	char *str_4 = strcpy(str_1,str);
	printf("%s\n",str_1);
	printf("str:%s\n",str);
	char* str_2="Tom";
	printf("str_2:%s\n",str_2);
	printf("%c",str_1[strlen(str_1)]);
	printf("%s\n",str_4);

	return 0;
}

char* StringCopy(char* dest , char* source)  {
	return strcpy(dest,source);
}
