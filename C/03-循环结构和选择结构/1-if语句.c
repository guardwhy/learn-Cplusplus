#include <stdio.h>
/**
 * if语句
 * @return
 */
int main() {
    // 定义变量
    int a, b, max;
    // 输入整数
    printf("请输入两个整数: ");
    scanf("%d %d", &a, &b);

    // 假设最大值
    max = b;
    // 条件判断
    if(a > b)
        max = a;

    // 输出结果
    printf("%d和%d的较大值是:%d\n", a, b, max);
    return 0;
}