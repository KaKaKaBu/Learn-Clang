//
// Created by zhu on 2025/10/20.
//

//获取数组中的最大值
#include<stdio.h>

int main(void) {
	int array[5];
	for (int i = 0; i < 5; i++) {
		printf("请输入第%d个数\n", i + 1);
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < 5; i++) {
		//将较大的数字向后移动
		if (array[i] > array[i + 1]) {
			int temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
		}
	}
	printf("数组中的最大值是 %d\n", array[5]);
}
