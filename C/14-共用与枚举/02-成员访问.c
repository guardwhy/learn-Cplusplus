#include <stdio.h>
/**
 * 成员享有同一个起始地址
 * @return
*/
// 共用体数据类型
union untest{
    // 定义成员变量
    char c;
    short s;
    int i;
}myun;

// 结构体数据类型
struct structTest{
    char c;
    short s;
    int i;
}myst;

int main() {
    // 输出结构体成员地址值
    printf("%p %p %p\n", &myst.c, &myst.s,&myst.i); // 0x55a7d2fbe018 0x55a7d2fbe01a 0x55a7d2fbe01c
    // 输出共用体成员地址值
    printf("%p %p %p\n", &myun.c, &myun.s,&myun.i);  // 0x55a7d2fbe020 0x55a7d2fbe020 0x55a7d2fbe020

    // 共用体成员赋值
    myun.i = 0x11223366;
    // 输出共用体成员地址值
    printf("myun.c = %x\n", myun.c);    // myun.c = 66
    printf("myun.s = %x\n", myun.s);    // myun.s = 3366
    printf("myun.i = %x\n", myun.i);    // myun.i = 11223366


    return 0;
}