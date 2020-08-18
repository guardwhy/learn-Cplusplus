#include <stdio.h>
/**
 * 字符串数组参数传递
 * @return
*/
// 显示字符串数组
void put_strary(const char s[][6], int n){
    int i;
    for(i=0; i<n; i++){
        printf("s[%d]=\"%s\"\n", i, s[i]);
    }
}

int main() {
    // 初始化字符串
    char cs[][6] = {"Turbo", "NA", "DOHC"};

    // 调用函数
    put_strary(cs, 3);
    return 0;
}