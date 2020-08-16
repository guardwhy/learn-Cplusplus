#include <stdio.h>
/**
 * 对数组元素进行倒序排序
 * @return
 */
int main() {
    int i;
    // 定义数组
    int arr[7];
    // 输入元素的值
    for(i=0; i<7; i++){
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i < 3; i++){
        // 对数组元素进行倒序排列
        int temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }

    puts("倒序排列了.");
    for(i=0; i<7; i++){
        // 显示元素的值
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}