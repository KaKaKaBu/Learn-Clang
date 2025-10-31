//
// Created by zhu on 2025/10/22.
//
#include <stdio.h>
#define PI 3.14
float zhouchang(float x);
float area(float x);
float biaomianji(float x);
float tiji(float x);
int main(void) {
    double r;
    printf(("请输入半径\n"));
    scanf("%lf",&r);
    printf("周长：%f\n,面积：%f\n，表面积：%f\n，体积：%f\n",zhouchang(r),area(r),biaomianji(r),tiji(r));
}

float zhouchang(float x) {
    return PI*x*2;
}

float area(float x) {
    return PI*x*x;
}

float biaomianji(float x) {
    return 4*PI*x*x;

}

float tiji(float x) {
    return (4.0/3.0)*PI*x*x*x;
}

