#include <stdio.h>
/**
 * 字符串字面量的长度
 * @return
 */
int main() {
    
    printf("sizeof(\"123\") = %u\n", (unsigned)sizeof("123"));
    printf("sizeof(\"AB\\tC\") = %u\n", (unsigned)sizeof("AB\tC"));
    printf("sizeof(\"abc\\0def\") = %u\n", (unsigned)sizeof("abc\0def"));

    return 0;
}