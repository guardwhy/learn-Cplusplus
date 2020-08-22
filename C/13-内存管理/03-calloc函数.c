#include <stdio.h>
#include <stdlib.h>
/**
 * 申请堆内存空间并返回,所申请的空间,自动清零。
 * @return
*/
int main() {
    // 动态分配内存
    int *array = (int*)calloc(10, sizeof(int));
    // 遍历数组
    for(int i=0; i<10; i++){
        // 输出数组元素
        printf("%d\n", array[i]);
    }
    return 0;
}