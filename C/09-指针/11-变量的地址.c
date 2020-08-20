#include <stdio.h>
/**
 * 打印变量和变量的地址
 * @return
 */
int main() {
    // 定义变量
    int var = 10;
    // 定义指针变量
    int *temp;
    temp = &var;
    // 输出结果
    printf("var的值是:%d\n", var); // 10

    printf("var的内存地址是:%x\n", &var); //bb39eb8c

    printf("指针temp的地址是:%x\n", &temp); // bb39eb90

    printf("var的值是:%d\n", *temp); // 10

    printf("var的地址的是: %x\n", temp); // bb39eb8c

    // temp &temp *temp 区别
    /**
     * temp = &var = bb39eb8c
     * &temp = bb39eb8c
     * *temp = 10
     */
    return 0;
}
