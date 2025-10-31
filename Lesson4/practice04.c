//
// Created by zhu on 2025/10/21.
//
#include <stdio.h>

void inputScores(int scores[], int n);

float calculateAverage(int scores[], int n);

int findMax(int scores[], int n);

int findMin(int scores[], int n);

int countPass(int scores[], int n);

void printReport(int scores[], int n);

int main() {
    int scores[5];

    inputScores(scores, 5);
    printReport(scores, 5);

    return 0;
}

void inputScores(int scores[], int n) {
    printf("请输入%d个学生的成绩：\n", n);
    for (int i = 0; i < n; i++) {
        printf("学生%d的成绩: ", i + 1);
        scanf("%d", &scores[i]);
        while (scores[i] < 0 || scores[i] > 100) {
            printf("成绩应在0-100之间，请重新输入学生%d的成绩: ", i + 1);
            scanf("%d", &scores[i]);
        }
    }
}

float calculateAverage(int scores[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return sum / n;
}

int findMax(int scores[], int n) {
    int max = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}

int findMin(int scores[], int n) {
    int min = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    return min;
}

int countPass(int scores[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= 60) {
            count++;
        }
    }
    return count;
}

void printReport(int scores[], int n) {
    printf("\n=== 成绩分析报告 ===\n");

    printf("学生成绩列表：\n");
    for (int i = 0; i < n; i++) {
        printf("学生%d: %d分\n", i + 1, scores[i]);
    }

    printf("\n统计结果：\n");
    printf("平均分: %.2f\n", calculateAverage(scores, n));
    printf("最高分: %d\n", findMax(scores, n));
    printf("最低分: %d\n", findMin(scores, n));
    printf("及格人数: %d\n", countPass(scores, n));
    printf("不及格人数: %d\n", n - countPass(scores, n));

    float avg = calculateAverage(scores, n);
    printf("\n总体评价：\n");
    if (avg >= 90) {
        printf("优秀！班级整体表现很好。\n");
    } else if (avg >= 80) {
        printf("良好！班级表现不错。\n");
    } else if (avg >= 70) {
        printf("中等！还有提升空间。\n");
    } else if (avg >= 60) {
        printf("及格！需要更加努力。\n");
    } else {
        printf("不及格！需要重点关注和辅导。\n");
    }
}
