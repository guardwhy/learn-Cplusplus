#include <stdio.h>
/**
 * 三个整数中的最大值
 * @return
 */
int max(int a, int b, int c){
    // 定义最大值
    int max = a;
    // 条件判断
    if(b > max) max = b;
    if(c > max) max = c;

    // 返回最大值
    return max;
}

int main() {
    // 定义变量
    int a, b, c;

    puts("请输入三个整数:");
    printf("整数a:"); scanf("%d", &a);
    printf("整数b:"); scanf("%d", &b);
    printf("整数c:"); scanf("%d", &b);

    printf("最大值是%d. \n", max(a, b, c));
    return 0;
}