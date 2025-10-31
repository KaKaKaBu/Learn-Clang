//
// Created by zhu on 2025/10/21.
//

#include <stdio.h>
#include <string.h>

int findSubstring(char* str,char* sub_str);
int main(void) {
	//复刻strstr(),_CONST_RETURN char *__cdecl strstr(const char *_Str,const char *_SubStr);
	char str[]="hello,world";
	char sub_str[]="aa";
	int x=findSubstring(str,sub_str);
	printf("%d",x);
}
int findSubstring(char* str,char*sub_str) {


	int i=0;
	while (str[i]) {
		int j=0,temp=0;
		temp=i;
		while (str[temp]!='\0'&&str[temp]==sub_str[j]&&sub_str[j]!='\0') {
			temp++;j++;
		}
		if (sub_str[j]=='\0')
			return i+1;
		i++;
	}
	return -1;

}