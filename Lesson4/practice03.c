//
// Created by zhu on 2025/10/21.
//

#include <stdio.h>

double add(double a, double b);

double subtract(double a, double b);

double multiply(double a, double b);

double divide(double a, double b);

void displayMenu();

void clearInputBuffer();

double getNumberInput();

int main() {
    int choice;
    double num1, num2, result;

    printf("=== 简单计算器 ===\n");

    while (1) {
        displayMenu();
        printf("请选择操作 (1-5): ");

        if (scanf("%d", &choice) != 1) {
            printf("输入无效，请输入数字！\n");
            clearInputBuffer();
            continue;
        }

        switch (choice) {
            case 1:
                num1 = getNumberInput();
                num2 = getNumberInput();
                result = add(num1, num2);
                printf("结果: %.2lf + %.2lf = %.2lf\n\n", num1, num2, result);
                break;

            case 2:
                num1 = getNumberInput();
                num2 = getNumberInput();
                result = subtract(num1, num2);
                printf("结果: %.2lf - %.2lf = %.2lf\n\n", num1, num2, result);
                break;

            case 3:
                num1 = getNumberInput();
                num2 = getNumberInput();
                result = multiply(num1, num2);
                printf("结果: %.2lf × %.2lf = %.2lf\n\n", num1, num2, result);
                break;

            case 4:
                num1 = getNumberInput();
                num2 = getNumberInput();
                if (num2 == 0) {
                    printf("错误：除数不能为零！\n\n");
                } else {
                    result = divide(num1, num2);
                    printf("结果: %.2lf ÷ %.2lf = %.2lf\n\n", num1, num2, result);
                }
                break;

            case 5:
                printf("感谢使用计算器，再见！\n");
                return 0;

            default:
                printf("无效的选择！\n\n");
                break;
        }
    }

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

void displayMenu() {
    printf("\n");
    printf("1. 加法 (+)\n");
    printf("2. 减法 (-)\n");
    printf("3. 乘法 (×)\n");
    printf("4. 除法 (÷)\n");
    printf("5. 退出\n");
    printf("--------------------------------\n");
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

double getNumberInput() {
    double number;
    printf("请输入数字: ");
    while (scanf("%lf", &number) != 1) {
        printf("输入无效，请输入数字: ");
        clearInputBuffer();
    }
    return number;
}
