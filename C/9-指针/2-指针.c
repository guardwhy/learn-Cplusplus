#include <stdio.h>
/**
 * 通过指针间接地操作变量
 * @return
*/
int main() {
    // 定义变量
    int kobe = 196;
    int james = 203;
    int Curry = 191;

    // 定义指针变量
    int *xm, *xh;
    // 指针指向地址
    xm = &kobe;
    xh = &Curry;

     printf("小明偶像的身高是:%d\n", *xm);
     printf("小宏偶像的身高是:%d\n", *xh);

    xm = &james; // 小明指向james
    *xh = 188; // 将小宏指向的对象赋为188

    // 输出结果
    putchar('\n');
    printf("kobe的身高:%d\n", kobe);
    printf("james的身高:%d\n", james);
    printf("Curry的身高:%d\n", Curry);
    printf("小明偶像的身高是:%d\n", *xm);
    printf("小宏偶像的身高是:%d\n", *xh);
    return 0;
}