#include <stdio.h>

int main()
{
    // 定义变量
    short a = 14;
    int b = 6;
    long c = 1236;

    // %hd：表示短整型, %d：表示整型, %ld：表示长整型
    printf("a=%hd, b=%d, c=%ld\n", a, b, c);
    
    return 0;
}
