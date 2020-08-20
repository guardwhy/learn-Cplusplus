#include <stdio.h>
/**
 * 指针指向问题
 * @return
 */
int main() {
    // 定义变量
    int a = 10;
    int *p = &a;
    // 输出结果
    printf("a = %d *p = %d\n",a,*p);

    // 定义变量y
    int y = 20;
    p = &y;
    // 输出结果
    printf("y = %d *p = %d\n", y, *p);
    return 0;
}