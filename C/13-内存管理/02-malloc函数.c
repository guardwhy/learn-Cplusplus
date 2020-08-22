#include <stdio.h>
#include <stdlib.h>
/**
 * 堆内存的申请和释放
 * @return
 */
int main() {
    // 申请基本数据类型和数组
    int a = 100;
    int *p = &a;
    // 输出结果
    printf("*p=%d\n", a);
    printf("**********\n");

    // 动态内存分配
    int *pm = (int*)malloc(sizeof(int));
    // 条件判断
    if(pm == NULL)
        return -1;
    *pm = 100;
    printf("*pm=%d\n", *pm);
    printf("**********\n");

    // 定义数组
    int array[10];
    int *pa = array;
    pm = (int*)malloc(10*sizeof(int));

    // 遍历数组
    for(int i=0; i<5; i++){
        printf("%d\n", pm[i]);
    }
    printf("**********\n");

    // 释放内存
    free(pm);
    return 0;
}