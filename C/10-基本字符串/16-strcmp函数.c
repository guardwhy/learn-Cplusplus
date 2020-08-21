#include <stdio.h>
#include <string.h>
/**
 * strcmp函数,比较字符串内容是否相等
 * @return
 */
int main() {
    // 定义字符串数组
    char str1[] = "abcdefg";
    char str2[] = "abcdefgt";

    // 调用函数
    int ret = strcmp(str1, str2);
    // 判断条件
    if(ret == 0)
        printf("str1 = str2");
    else if(ret > 0)
        printf("str1 > str2");
    else
        printf("str1 < str2");
    return 0;
}