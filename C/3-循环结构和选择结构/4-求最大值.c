#include <stdio.h>
/**
 * 计算三个数的最大值
 * @return
 */
int main() {
    // 定义变量
    int a, b, c, max;
    puts("请输入三个整数.");

    // 输入整数
    printf("整数1:"); scanf("%d", &a);
    printf("整数2:"); scanf("%d", &b);
    printf("整数3:"); scanf("%d", &c);

    // 定义a为最大值
    max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    printf("最大值是%d. \n", max);
    return 0;
}