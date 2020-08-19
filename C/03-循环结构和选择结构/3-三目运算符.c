#include <stdio.h>
/**
 * 三目运算符
 * @return
 */
int main() {
    // 定义变量
    int a, b, max;
    puts("请输入2个整数.");

    printf("整数1:"); scanf("%d", &a);
    printf("整数2:"); scanf("%d", &b);

    max = (a > b) ? a : b;
    printf("最大值是:%d", max);
    return 0;
}