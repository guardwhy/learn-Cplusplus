#include <stdio.h>
/**
 * switch语句和break关键字
 * @return
 */
int main() {
    // 定义变量
    int sw;
    puts("请输入整数:");
    scanf("%d",&sw);

    switch (sw) {
        case 1:
            puts("A"); puts("B");
            break;
        case 2:
            puts("C");
        case 5:
            puts("D");
            break;
        case 6:

        case 7:
            puts("E");
            break;
        default:
            puts("F");
            break;
    }
    return 0;
}