#include <stdio.h>
/**
 * sizeof运算符
 * @return
 */
int main() {
    // %u 十进制无符号整数。
    printf("sizeof(char) = %u\n", (unsigned)sizeof(char)); // sizeof(char) = 1
    printf("sizeof(short) = %u\n", (unsigned)sizeof(short)); //sizeof(short) = 2
    printf("sizeof(int) = %u\n", (unsigned)sizeof(int)); // sizeof(int) = 4
    printf("sizeof(long) = %u\n", (unsigned)sizeof(long)); // sizeof(long) = 8
    return 0;
}