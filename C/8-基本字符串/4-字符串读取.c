#include <stdio.h>
/**
 * 字符串读取
 * @return
 */
int main() {
    char name[48];

    printf("请输入你的姓名:");
    scanf("%s", name);
    printf("你好,%s先生/女士!!!\n", name);
    return 0;
}