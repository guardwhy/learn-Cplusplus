#include <stdio.h>
/**
 * 一维数组大小
 * @return
 */
int main() {
    printf("int[10]=%ld \n", sizeof(int[10])); // int[10]=40

    // 定义数组
    int array[10];
    // 输出数组大小
    printf("array size = %ld\n",sizeof(array)); // array size = 40
    printf("array[0] = %ld\n",sizeof(array[0])); // array[0] = 4
    return 0;
}