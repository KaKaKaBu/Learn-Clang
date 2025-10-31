//
// Created by zhu on 2025/10/20.
//
#include <stdio.h>
#include <string.h>

int compareTo(char *str_1, char *str_2);

int main(void) {
	// strcmp()
	char str_1[] = "hello";
	char str_2[] = "world";
	int i = compareTo(str_1, str_2);
	printf("%d\n", i);
}

int compareTo(char *str_1, char *str_2) {
	int i = 0;
	if (strlen(str_1) != strlen(str_2))
		return -1;
	while (str_1[i]) {
		if (str_1[i] != str_2[i])
			return -1;
		i++;
	}
	return 1;
}
