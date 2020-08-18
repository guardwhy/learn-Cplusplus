#include <stdio.h>
/**
 * 读取字符串数组中的字符串
 * @return
 */
int main() {
    // 定义变量
    int i;
    char s[3][128];

    // 遍历字符串
    for(i=0; i < 3; i++){
        printf("s[%d]:", i);
        scanf("%s", s[i]);
    }

    for(i=0; i<3; i++){
        printf("s[%d] =\"%s\"\n", i, s[i]);
    }
    return 0;
}