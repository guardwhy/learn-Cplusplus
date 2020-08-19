#include <stdio.h>
/**
 * 一维数组的存储
 * @return
 */
int main() {
    // 定义数组
    int array[8];
    // 遍历数组
    for(int i=0; i<8; i++){
        printf("&array[%d] = %p\n", i, &array[i]);
    }
    return 0;
}