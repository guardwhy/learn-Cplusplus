#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * fputs函数:一次性写入字符串
 * @return
 */
void test(){
    // 定义字符串
    char *buf[] = {"床前明月光\n","疑似地上霜\n","举头望明月\n","低头思故乡\n"};
    // 打开文件
    FILE *fp = NULL;
    // 打开文件
    fp = fopen("a.txt", "w");
    // 条件判断
    if(fp == NULL){
        perror("fopen");
        return;
    }

    // 遍历字符串
    for(int i=0; i < sizeof(buf)/sizeof(buf[0]); i++){
        // 写入操作
        fputs(buf[i], fp);
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
