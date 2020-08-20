#include <stdio.h>
/**
 * 算术运算
 * @return
 */
int main() {
    // 定义变量
    char *p = (char*)0x10000;
    // 输出结果
    printf("%x\n", p);  // 10000
    printf("%x\n", p+1); // 10001
    printf("%x\n", p+5); // 10005

    printf("********\n");

    // 定义变量
    int *q = (char*)0x10000;
    // 输出结果
    printf("%x\n", q);      // 10000
    printf("%x\n", q+1);    // 10004
    printf("%x\n", q+5);    // 10014

    printf("==========\n");
    printf("%x\n", ++p);    // 10001
    printf("%x\n", q++);    // 10000
    printf("%x\n", p);      // 10001
    printf("%x\n", q);      // 10004
    return 0;
}