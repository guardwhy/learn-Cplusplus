#include <stdio.h>
#include <stdlib.h>
/**
 * 扩容原有内存的大小
 * @return
 */
int main() {
    // 动态内存分配
    int *array = (int*)calloc(10, sizeof(int));
    int *newArray = realloc(array, 20);

    // 条件判断
    if(newArray == NULL){
        printf("realloc 失败！！！");
        return -1;
    }

    for(int i=0; i<15; i++){
        printf("%d\n", newArray[i]);
    }
    return 0;
}