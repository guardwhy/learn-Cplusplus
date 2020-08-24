#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * fgets函数:获取一行字符串
 * @return
 */
void test(){
    // 打开文件
    FILE *fp = NULL;
    // 打开文件
    fp = fopen("a.txt", "r");
    // 条件判断
    if(fp == NULL){
        perror("fopen");
        return;
    }

    char buf[128] = "";
    // 条件遍历
    while(fgets(buf, sizeof(buf), fp)){
        printf("buf = %s\n", buf);
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
