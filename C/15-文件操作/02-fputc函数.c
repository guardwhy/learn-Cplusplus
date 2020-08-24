#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * fputc函数:字符写文件
 * @return
 */
void test(){
    // 打开文件
    FILE *fp = NULL;
    // 打开文件
    fp = fopen("c.txt", "w");
    // 条件判断
    if(fp == NULL){
        perror("fopen");
        return;
    }
    
    // 操作文件
    char buf[] = "hello file";
    // 定义变量
    int i =0;
    while (buf[i] != 0){
        // 写入文字
        fputc(buf[i], fp);
        i++;
    }
    printf("打开成功\n");
    // 关闭fp
    fclose(fp);
}

int main()
{
    // 调用函数
    test();
    return 0;
}
