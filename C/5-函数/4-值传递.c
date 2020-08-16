#include <stdio.h>
/**
 * 值传递
 * @return
*/

// 返回x的n次幂
double power(double x, int n){
    int i;
    double temp = 1.0;
    // 遍历操作
    for(i=1; i <= n; i++)
        temp *= x;
    return temp;
}

int main() {
    // 定义变量
    double a;
    int b;
    // 输出结果
    printf("求a的b次幂。\n");
    printf("实数a:"); scanf("%lf", &a);
    printf("整数b:"); scanf("%d", &b);

    printf("%.2f的%d次幂是%.2f。\n", a, b, power(a, b));
    return 0;
}