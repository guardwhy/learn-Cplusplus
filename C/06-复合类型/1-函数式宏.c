#include <stdio.h>
/**
 * 函数式宏
 * @return
*/
#define sqr(x)((x) * (x)) // 计算x的平方的函数式宏

int main() {
    // 定义变量
    int n;
    double x;

    puts("请输入一个整数:");
    scanf("%d", &n);
    printf("该数的平方是%d。\n", sqr(n));

    puts("请输入一个实数:");
    scanf("%lf", &x);
    printf("该数的平方是%.2f。\n", sqr(x));
    return 0;
}