//
// Created by zhu on 2025/10/29.
//

/*测试：函数指针的使用
步骤:
1.定义三个函数
函数1:返回整数值，接收一个整数参数，实现求数据平方的计算，并返回
函数2:返回整数值，接收一个整数参数，实现求数据立方的计算，并返回
函数3：返回整数值，接收一个整数参数，和一个函数指针参数，
    该函数指针可以接收求平方的函数，也可以接收求立方的函数
    最终实现根据传入整数和传入的函数，实现求整数平方或求立方值，并返回的功能
2.在main方法中，输入一个整数，然后调用函数3，分别输出该整数的平方值，和立方值
*/

#include <stdio.h>

int pows(int x)
{
    return x * x;
}

int pow2(int x)
{
    return x * x * x;
}

int pow3(int x, int (*p)(int x))
{
    return p(x);
}

int main(void)
{
    int (*p)(int x, int (*p)(int x)) = pow3;
    p = pow3;
    printf("平方和%d", p(2, pows));
    printf("立方和%d", p(2, pow2));
}
