//
// Created by zhu on 2025/10/30.
//

#include <stdio.h>

// 定义交通灯状态的枚举类型
enum TrafficLight {
    RED,    // 红灯
    GREEN,  // 绿灯
    YELLOW  // 黄灯
};

void print(const enum TrafficLight currentLight)
{
    printf("当前交通灯: ");
    switch(currentLight) {
    case RED:
        printf("红灯 - 不能过马路\n");
        break;
    case GREEN:
        printf("绿灯 - 可以过马路\n");
        break;
    case YELLOW:
        printf("黄灯 - 请等待\n");
        break;
    }
}

int main() {
    // 定义交通灯变量

    // 测试红灯情况
    enum TrafficLight currentLight = RED;
    print(currentLight);

    // 测试绿灯情况
    currentLight = GREEN;
    print(currentLight);

    // 测试黄灯情况
    currentLight = YELLOW;
    print(currentLight);

    return 0;
}