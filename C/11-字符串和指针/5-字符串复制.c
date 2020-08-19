#include <stdio.h>
/**
 * 复制字符串
 * @return
 */

// 将字符串s复制到d
char* str_copy(char *d, const char *s){
    char *t = d;
    while (*d++ = *s++)
        ;
    return t;
}

int main() {
    // 定义字符串
    char str[128] = "ABC";
    char temp[128];

    printf("str=\"%s\"\n", str);
    printf("复制的是:", temp);
    scanf("%s", temp);

    // 复制函数
    str_copy(str, temp);
    puts("复制了。");
    printf("str=\"%s\"\n", str);
    return 0;
}