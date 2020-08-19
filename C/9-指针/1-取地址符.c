#include <stdio.h>
/**
 * 取地址运算符
 * @return
 */
int main() {
    // 定义变量
    int n;
    double x;
    int a[3];

    // 输出结果
    printf("n的地址:%p\n", &n); // n的地址:0x7ffe552e445c

    printf("x的地址:%p\n", &x); // x的地址:0x7ffe552e4460

    printf("a[0]的地址:%p\n", &a[0]); //  a[0]的地址:0x7ffe552e446c

    printf("a[1]的地址:%p\n", &a[1]); //  a[1]的地址:0x7ffe552e4470

    printf("a[2]的地址:%p\n", &a[2]); // a[2]的地址:0x7ffe552e4474

    return 0;
}