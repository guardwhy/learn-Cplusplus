#include <stdio.h>
/**
 * 调用其他函数
 * @return
 */

//  返回较大值
int max2(int a, int b){
    return (a > b) ? a : b;
}

//  返回四个整数最大值
int max4(int a, int b, int c, int d){
    return max2(max2(a,b), max2(c,d));
}

int main() {
    // 定义变量
    int n1, n2, n3, n4;

    puts("请输入四个整数:");
    printf("整数n1:"); scanf("%d", &n1);
    printf("整数n2:"); scanf("%d", &n2);
    printf("整数n3:"); scanf("%d", &n3);
    printf("整数n4:"); scanf("%d", &n4);

    printf("四个数的最大值是:%d\n", max4(n1, n2, n3, n4));
    return 0;
}