#include <stdio.h>
/**
 * 指针操作字符串
 * @return
*/

// 返回字符串s的长度
int str_length(const char* s){
    int length = 0;
    // 条件遍历
    while (*s++)
        length++;
    return length;
}

int main() {
    char str[128];
    printf("请输入字符串:");
    scanf("%s", str);
    printf("字符串\"%s\"的长度是%d。\n", str, str_length(str));
    return 0;
}