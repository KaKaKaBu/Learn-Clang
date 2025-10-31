//
// Created by zhu on 2025/10/20.
//

#include <stdio.h>
#include <string.h>

int findChar(char* str,char chr);

int main(void) {
	// strchr() 返回字符在字符串中的位置
	//-1为未找到
	char str[]="hello";
	char chr='o';
	int i=findChar(str,chr);
	printf("%d",i);
}
int findChar(char* str,char chr) {
	int i=0;
	while (str[i]) {
		if (str[i]==chr)
			return i+1;
		i++;
	}
	return -1;
}
