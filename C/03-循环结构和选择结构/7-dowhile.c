#include <stdio.h>
/**
 * do...while循环语句
 * @return
 */
int main() {
    // 定义变量用来保存和
    int sum = 0;
    // 定义变量用来保存计算器
    int cnt = 0;
    // 判断变量
    int retry;

    do{
        // 定义变量
        int a;
        printf("请输入一个整数:");
        scanf("%d", &a);
        // 求和操作
        sum = sum + a;
        // 计算器累计
        cnt = cnt + 1;

        printf("是否继续? <Yes..0/No...9>:");
        scanf("%d", &retry);
    }while (retry == 0);

    // 输出结果
    printf("和是%d, 平均值是%.2f.\n", sum, (double) sum / cnt);
    return 0;
}