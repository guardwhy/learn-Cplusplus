#include <stdio.h>
/**
 * 链接两个字符串
 * @return
 */
int main() {
    // 定义字符串
    char firstName[30] = "kobe";
    char lastName[30] = "Bryant";

    // 定义指针变量
    char *p;
    for(p=firstName; *p != '\0'; p++);
    for(char *q = lastName; *p = *q; p++,q++);

    printf("name=%s\n", firstName);
    return 0;
}