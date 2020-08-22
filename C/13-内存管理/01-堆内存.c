#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 堆内存
 * @return
 */
int main() {
    // 动态内存分配
    int *p = (int*)malloc(1024*1024);
    // 条件判断
    if(p == NULL){
        printf("分配失败\n");
        return -1;
    }

    // 避免整型溢出
    int *q = (int*)malloc((unsigned int)-1);
    if(q == NULL){
        printf("malloc error\n");
        return -1;
    }
    return 0;
}