#include <stdio.h>
/**
 * 数组遍历
 * @return
 */
int main() {
    // 定义变量
    int i;
    // 初始化数组
    int arr[5] = {1,2,3,4,5};
    // 显示元素的值
    for(i=0; i<5; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}