#include <stdio.h>
/**
 * 计算和差值
 * @return
*/

// 调用函数
void sum_diff(int n1, int n2, int *sum, int *diff){
    *sum = n1 + n2;
    *diff = (n1 > n2)? n1 - n2 : n2 - n1;
}


int main() {
    // 定义变量
    int na, nb;
    // 初始化变量
    int wa = 0, sa = 0;

    puts("请输入两个整数.");
    printf("整数A:"); scanf("%d", &na);
    printf("整数B:"); scanf("%d", &nb);

    // 调用函数
    sum_diff(na, nb, &wa, &sa);

    printf("两数之和是%d,之差是%d。\n", wa, sa);
    return 0;
}