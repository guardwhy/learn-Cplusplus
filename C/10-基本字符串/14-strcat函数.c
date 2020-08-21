#include <stdio.h>
#include <string.h>
/**
 * strcat()函数
 * @return
 */
int main() {
    // 创建字符串数组
    char firstName[20] = "kobe";
    char lastName[20] = "Bryant";

    // 调用函数
    strcat(firstName, lastName);
    // 输出结果
    printf("name=%s\n", firstName);
    return 0;
}