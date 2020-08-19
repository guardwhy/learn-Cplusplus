#include <stdio.h>
/**
 * 地址大小
 * @return
 */
int main() {
    // 定义变量
    char a = 1; short b = 2; int c = 3; long d = 4; float e = 1.2; double f = 2.3;
    // 32位输出地址大小
    printf("&a=%p\n", &a);
    printf("&b=%p\n", &b);
    printf("&c=%p\n", &c);
    printf("&d=%p\n", &d);
    printf("&e=%p\n", &e);
    printf("&f=%p\n", &f);

    printf("*************");

    // 64位输出地址大小
    printf("sizeof(&a) = %ld\n", sizeof(&a));
    printf("sizeof(&b) = %ld\n", sizeof(&b));
    printf("sizeof(&c) = %ld\n", sizeof(&c));
    printf("sizeof(&d) = %ld\n", sizeof(&d));
    printf("sizeof(&e) = %ld\n", sizeof(&e));
    printf("sizeof(&f) = %ld\n", sizeof(&f));

    printf("*************");

    // 间接访问内存
    printf("a = %d\n", *(&a));
    printf("b = %d\n", *(&b));
    printf("c = %d\n", *(&c));
    printf("d = %ld\n", *(&d));
    printf("e = %f\n", *(&e));
    printf("f = %f\n", *(&f));

    return 0;
}