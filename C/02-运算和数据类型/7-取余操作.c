#include <stdio.h>
/**
 * 取余操作
 * @return
 */
int main() {
    // 定义变量
    int no;

    printf("请输入一个整数:");

    scanf("%d", &no);

    // 输出结果
    printf("最后一位是%d.\n", no % 10);
    return 0;
}