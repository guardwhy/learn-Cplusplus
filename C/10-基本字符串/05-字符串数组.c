#include <stdio.h>
/**
 * 字符串数组
 * @return
 */
int main() {
    // 定义变量
    int i;
    // 初始化数组
    char cs[][6] = {"kobe", "james","Curry"};

    // 遍历字符串数组
    for(i=0; i<3; i++){
        printf("cs[%d]= \"%s\"\n", i, cs[i]);
    }
    return 0;
}