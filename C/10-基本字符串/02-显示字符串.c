#include <stdio.h>
/**
 * 显示字符串
 * @return
 */
int main() {
    // 保存字符串的数组
    char str[4];

    // 赋值操作
    str[0] = 'A';
    str[1] = 'B';
    str[2] = 'C';
    str[3] = '\0';

    printf("字符串str为\"%s\".\n", str);
    return 0;
}