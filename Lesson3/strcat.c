//
// Created by zhu on 2025/10/20.
//
#include <stdio.h>
#include <string.h>

int main(void) {
	char str_1[11]="hello";
	char str_2[]="world";
	size_t str_2_len = strlen(str_2);
	size_t str_1_len = strlen(str_1);
	int i=0;
	while (str_2[i]) {
		str_1[str_1_len+i]=str_2[i];
		i++;
	}
	str_1[str_1_len+i]='\0';
	printf("%s",str_1);

}