#include <stdio.h>
/**
 * 二维数组的大小
 * @return
 */
int main() {
    // 定义变量
    int arr[3][4];
    // 成员的大小
    printf("sizeof(arr[0]) = %d sizeof(int[4]) = %d\n", sizeof(arr[0]), sizeof(int[4]));
    // 数组的大小
    printf("sizeof(arr) = %d\n", sizeof(arr));
    return 0;
}