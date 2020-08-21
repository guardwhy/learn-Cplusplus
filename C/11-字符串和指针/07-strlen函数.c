#include <stdio.h>
#include <string.h>
/**
 * strlen是一个函数,它用来计算指定字符串str的长度,但不包括结束字符.
 * @return
 */
int main() {
    // 定义字符串数组
    char array[30] = "guardwhy";
    printf("%s\n", array);

    // 定义计数器
    int count = strlen(array);
    printf("count = %d\n", count);
    return 0;
}