//
// Created by zhu on 2025/10/22.
//
#include <stdio.h>
#include <math.h>

int main(void) {
    int point[3][2];
    printf("依次输入x，y");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &point[i][j]);
        }
    }
    //判断三个点在一个直线上或有重复的点
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (point[i][0] == point[j][0] && point[i][1] == point[j][1]) {
                printf("不能构成三角形（有重复的点）\n");
                return 0;
            }
        }
    }

    // 使用向量叉积判断是否共线
    // 向量AB = (x2-x1, y2-y1), 向量AC = (x3-x1, y3-y1)
    // 叉积 = (x2-x1)*(y3-y1) - (y2-y1)*(x3-x1)
    int cross_product = (point[1][0] - point[0][0]) * (point[2][1] - point[0][1]) -
                       (point[1][1] - point[0][1]) * (point[2][0] - point[0][0]);

    if (cross_product == 0) {
        printf("不能构成三角形（三点共线）\n");
        return 0;
    }


    printf("可以构成三角形");
}
