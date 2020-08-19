#include <stdio.h>
/**
 * 地址大小
 * @return
 */
int main() {
    // 定义变量
    char a; short b; int c; long d; float e; double f;
    // 32位输出地址大小
    printf("&a=%p\n", &a);
    printf("&b=%p\n", &b);
    printf("&c=%p\n", &c);
    printf("&d=%p\n", &d);
    printf("&e=%p\n", &e);
    printf("&f=%p\n", &f);

    // 64位输出地址大小
    printf("sizeof(&a) = %d\n", sizeof(&a));
    printf("sizeof(&b) = %d\n", sizeof(&b));
    printf("sizeof(&c) = %d\n", sizeof(&c));
    printf("sizeof(&d) = %d\n", sizeof(&d));
    printf("sizeof(&e) = %d\n", sizeof(&e));
    printf("sizeof(&f) = %d\n", sizeof(&f));
    
    return 0;
}