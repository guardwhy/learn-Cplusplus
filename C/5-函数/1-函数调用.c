#include <stdio.h>
/**
 * 函数调用
 * @return
 */

/**
 * 返回较大值
 * @return
 */
int max2(int a, int b){ // 形式参数
    // 条件判断
    if(a > b){
        return a;
    } else{
        return b;
    }
}

int main() {
    // 定义变量
    int n1, n2;
    puts("请输入两个整数:");

    // 输出结果
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);

    printf("两个整数之间的较大数是:%d.\n", max2(n1, n2)); // 实际参数
    return 0;
}