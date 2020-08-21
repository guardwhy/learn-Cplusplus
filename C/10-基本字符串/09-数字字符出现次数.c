#include <stdio.h>
/**
 * 数字字符的出现的次数
 * @return
 */

// 将字符串s中的数字字符的出现次数保存数组cnt
void str_dcount(const char s[], int cnt[]){
    // 定义变量
    int i = 0;
    while (s[i]){
        if(s[i] >= '0' && s[i] <= '9')
            cnt[s[i] - '0']++;
        i++;
    }
}

int main() {
    int i;
    int dcnt[10] = {0}; // 分布
    char str[128]; // 字符串

    printf("请输入字符串:");
    scanf("%s", str);

    // 调用函数
    str_dcount(str, dcnt);

    puts("数字字符的出现次数");
    for(i=0; i<10; i++)
        printf("'%d':%d\n", i,dcnt[i]);
    return 0;
}