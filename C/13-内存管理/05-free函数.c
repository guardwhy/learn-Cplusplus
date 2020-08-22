#include <stdio.h>
#include <stdlib.h>
/**
 * 释放申请的堆内存
 * @return
 */
int main() {
    // 动态分配内存
    int *array = (int*)calloc(10, sizeof(int));
    free(array);
    return 0;
}