#include <stdio.h>
/**
 * 字符串数组
 * @return
 */
int main() {
    // 定义变量
    int i;
    char a[][5] = {"kobe", "C", "java"};
    char *p[] = {"paul", "x", "MAC"};

    // 遍历数组
    for(i=0; i<3; i++)
        printf("a[%d]=\"%s\"\n", i, a[i]);

    for(i=0; i<3; i++)
        printf("a[%d]=\"%s\"\n", i, p[i]);
    return 0;
}