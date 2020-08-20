#include <stdio.h>
/**
 * 比较运算
 * @return
*/
int main() {
    // 定义指针变量
    int *num1, *num2;
    // 定义整型变量
    int value = 10;
    num1 = &value;
    printf("%x\n", &num1);  // 61fe18
    value += 2;
    num2 = &value;
    printf("%x\n", &num2);  // 61fe10

    // 条件判断
    if(num1 == num2){
        printf("两个指针指向同一个地址\n");
    } else{
        printf("两个指针指向不同的地址\n");
    }
    return 0;
}