#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * fgetc函数:字符读文件
 * @return
 */
void test(){
    // 打开文件
    FILE *fp = NULL;
    // 打开文件
    fp = fopen("c.txt", "r");
    // 条件判断
    if(fp == NULL){
        perror("fopen");
        return;
    }

    // 操作文件
    while (!feof(fp)){ // feop：检测是否读取到了文件的结尾
        char ch = 0;
        ch = fgetc(fp);
        // 输出字符串
        printf("ch = %c\n", ch);
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
