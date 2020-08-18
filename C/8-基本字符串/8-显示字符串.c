#include <stdio.h>
/**
 * 遍历字符串并且显示
 * @return
*/
// 显示字符串s
void put_string(const char s[]){
    int i = 0;
    while (s[i])
        putchar(s[i++]);
}

int main() {
    // 定义字符串数组
    char str[128];
    printf("请输入字符串:");
    scanf("%s", str);

    printf("你输入了");
    // 调用函数
    put_string(str);
    printf("。\n");
    return 0;
}