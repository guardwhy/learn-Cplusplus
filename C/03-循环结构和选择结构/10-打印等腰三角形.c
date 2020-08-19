#include <stdio.h>
/**
 * 打印右下方的等腰直角三角形
 * @return
 */
int main() {
    // 定义变量
    int i, j, len;
    puts("生成直角在右下方的等腰直角三角形。");
    printf("短边:");
    scanf("%d", &len);

    // 遍历操作
    for(i=1; i<=len; i++){
        for(j=1; j<=len-i; j++)
            putchar(' ');
        for(j=1; j<=i; j++){
            putchar('*');
        }

        // 换行操作
        putchar('\n');
    }
    return 0;
}