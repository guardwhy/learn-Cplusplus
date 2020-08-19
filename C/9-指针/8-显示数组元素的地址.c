#include <stdio.h>
/**
 * 显示数组元素的地址
 * @return
 */
int main() {
    // 定义变量
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    // 定义指针变量
    int *p = a;

    // 遍历数组
    for(i=0; i < 5; i++){
        printf("&a[%d] = %p p+%d=%p\n", i, &a[i], i, p+i);
    }
    return 0;
}