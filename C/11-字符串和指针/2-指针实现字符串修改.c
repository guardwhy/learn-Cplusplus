#include <stdio.h>
/**
 * 指针实现字符串的改写
 * @return
 */
int main() {
    /**
     char s[] = "ABC";
     printf("p=\"%s\"\n", s);
     s = "DEF"; // 出错
     printf("p=\"%s\"\n", s); // 修改失败
     */
    
    char *p = "123";
    printf("p=\"%s\"\n", p);
    // 修改字符串
    p = "456";
    printf("p=\"%s\"\n", p); // 修改成功
    return 0;
}