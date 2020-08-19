
#include <stdio.h>
/**
 * 不同进制输出
 * @return 
 */
int main()
{
    // 二进制数字
    short a = 0b1010110;
    // 八进制数字
    int b = 02713;
    // 十六进制数字
    long c = 0x1DAB83;

    // 以八进制输出
    printf("a=%ho, b=%o, c=%lo\n", a, b, c);
    // 以十进制输出
    printf("a=%hd, b=%d, c=%ld\n", a, b, c);
    // 以十六进制输出
    printf("a=%hx, b=%x, c=%lx\n", a, b, c);
    
    return 0;
}