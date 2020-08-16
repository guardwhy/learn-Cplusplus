#include <stdio.h>
/**
 * 运算符和操作数
 * @return
 */
int main() {
    // 定义变量
    int vx, vy;

    puts("请输入两个整数。");
    printf("整数vx:"); scanf("%d", &vx);
    printf("整数vy:"); scanf("%d", &vy);

    // 输出结果值
    printf("vx + vy = %d\n", vx + vy);
    printf("vx - vy = %d\n", vx - vy);
    printf("vx * vy = %d\n", vx * vy);
    printf("vx / vy = %d\n", vx / vy);
    printf("vx %% vy = %d\n", vx % vy);
    
    return 0;
}