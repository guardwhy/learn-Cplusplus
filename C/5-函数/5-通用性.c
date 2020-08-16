#include <stdio.h>
/**
 * 通用性
 * @return
 */
void put_chars(int ch, int n) {
    while (n-- > 0){
        putchar(ch);
    }
}

int main() {
    // 定义变量
    int i, len;
    puts("生成直角在右下方的等腰直角三角形。");
    puts("短边:");
    scanf("%d", &len);

    // 遍历操作
    for(i=1; i<=len; i++){
        put_chars(' ', len - i);
        put_chars('*', i);
        putchar('\n');
    }
    return 0;
}