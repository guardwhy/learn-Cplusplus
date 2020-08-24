#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 将这些获取到的字符串 用fputc写入文件, 直到键盘输入“:quit”退出写入
 * @return
 */
void test(){
    // 打开文件
    FILE *fp = NULL;
    // 打开文件
    fp = fopen("b.txt", "w");
    // 条件判断
    if(fp == NULL){
        perror("fopen");
        return;
    }

    // 操作文件
    while(1){
        char buf[128] = "";
        fgets(buf, sizeof(buf), stdin);
        // 条件判断
        if(strncmp(buf, ":quit", 5) == 0)
            break;

        // 定义变量
        int i = 0;
        while (buf[i] != 0){
            fputc(buf[i++], fp);
        }
    }
    // 关闭fp
    fclose(fp);
}

int main()
{
    // 调用函数
    test();
    return 0;
}
