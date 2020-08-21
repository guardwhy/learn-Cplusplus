#include <stdio.h>
#include <string.h>
/**
 * 拷贝函数
 * @return
 */
int main() {
    // 定义字符串数组
    char dest[100] = {0};
    char src[] = "kobe is mvp";
    // 输出结果
    printf("dest=%s\n",dest);
    printf("src=%s\n", src);

    // 调用函数
    strcpy(dest, src);
    printf("++++++++++++\n");
    printf("dest=%s\n", dest);
    printf("src=%s\n", src);
    return 0;
}