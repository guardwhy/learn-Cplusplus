#include <stdio.h>
/**
 * 传值操作
 * @return
 */
void mySwap(int *pa, int *pb)
{
    // 定义变量
    int temp;
    // 交换操作
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {
    // 定义整型变量
    int a = 4; int b = 5;
    // 输出 a,b值
    printf("a = %d b = %d\n",a,b);
    // 调用函数
    mySwap(&a,&b);
    // 输出交换后的值
    printf("a = %d b = %d\n",a,b);
    return 0;
}