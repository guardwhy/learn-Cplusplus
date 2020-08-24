#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 文件的随机读写
 * @return
 */
int main() {
    // 打开文件
    FILE *fp = fopen("f.txt", "w+");
    fputs("hello file", fp);
    // 关闭
    fclose(fp);
    
    fp = fopen("a.txt", "r");
    char buf[32] = "";
    fgets(buf, sizeof(buf), fp);
    
    // 输出结果
    printf("buf=%s\n", buf);
    // 关闭
    fclose(fp);
    return 0;
}