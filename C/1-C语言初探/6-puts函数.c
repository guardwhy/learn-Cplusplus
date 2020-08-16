#include <stdio.h>
/**
 * 输出函数puts
 * @return
 */
int main() {
    // 定义变量
    int n1, n2;
    // puts函数可以按照输出作为实参的字符串,并在结尾换行。
    puts("请输入两个整数: ");

    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);

    // 输出两个整数的和
    printf("n1和n2的和是:%d\n", n1+n2);
    return 0;
}