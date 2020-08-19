#include <stdio.h>
/**
 * 用数组实现的字符串和用指针实现的字符串
 * @return
 */
int main() {
    char str[] = "ABC"; // 数组实现字符串
    char *ptr = "123"; // 指针实现字符串

    printf("str=\"%s\"\n", str);
    printf("ptr=\"%s\"\n", ptr);
    return 0;
}