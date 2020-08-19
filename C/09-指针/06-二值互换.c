#include <stdio.h>
/**
 * 两值互换
 * @return
 */

// 互换函数
void swap(int *px, int *py){
    // 定义临时变量
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    // 定义变量
    int na, nb;
    puts("请输入两个整数.");
    printf("整数A:"); scanf("%d", &na);
    printf("整数B:"); scanf("%d", &nb);

    // 调用函数
    swap(&na, &nb);
    puts("互换两个数的值.");
    printf("整数A是%d.\n", na);
    printf("整数B是%d.\n", nb);
    return 0;
}