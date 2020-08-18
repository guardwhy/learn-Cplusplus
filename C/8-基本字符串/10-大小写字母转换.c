#include <stdio.h>
#include <ctype.h>
/**
 * 大小写字符转换
 * @return
 */
// 将字符串中的英文字符转换为大写字母
void str_toupper(char s[]){
    int i = 0;
    while(s[i]){
        s[i] = toupper(s[i]);
        i++;
    }
}

// 将字符串中的英文字符转换为小写字母
void str_tolower(char s[]){
    int i = 0;
    while(s[i]){
        s[i] = tolower(s[i]);
        i++;
    }
}

int main() {
    // 定义字符数组
    char str[128];
    printf("请输入字符串:");
    scanf("%s", str);

    // 大写字母函数调用
    str_toupper(str);
    printf("大写字母:%s\n", str);

    // 小写字母函数调用
    str_tolower(str);
    printf("小写字母:%s\n", str);
    return 0;
}