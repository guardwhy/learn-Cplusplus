#include <stdio.h>
/**
 * for语句
 * @return
 */
int main() {
    // 定义变量
    int i, n;
    puts("请输入整数值:");
    scanf("%d", &n);

    // 遍历循环
    for(i=2; i<=n; i+=2){
        printf("%d ", i);
    }
    putchar('\n');
    return 0;
}