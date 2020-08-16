#include <stdio.h>

int main()
{
    // 定义变量
    short a = 12;
    int b = 10;

    // 短整形的长度
    int short_length = sizeof a;
    // 整型的长度
    int int_length = sizeof(b);
    // 长整型的长度
    int long_length = sizeof(long);
    // 字符长度
    int char_length = sizeof(char);

    // 依次输出该长度
    printf("short=%d, int=%d, char=%d, long=%d", short_length, int_length, char_length, long_length);
    
    return 0;
}
