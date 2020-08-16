#include <stdio.h>
/**
 * 无符号的数输出
 * @return
 */
int main() {
    // 定义变量
    short a = 0100; // 八进制
    int b = -0x1; // 十六进制
    long c = 720; // 十进制

    // 定义无符号变量
    unsigned short  a1 = 0xffff; // 十六进制
    unsigned int  b1 = 0x80000000; // 十六进制
    unsigned long  c1 = 100; // 十六进制

    // 以无符号的形式输出有符号数
    printf("a=%#ho, b=%#x, c=%lu\n", a, b, c);

    // 有符号数的形式输出无符号类型
    printf("a1=%hd, b1=%d, c1=%ld\n", a1, b1, c1);
    return 0;
}