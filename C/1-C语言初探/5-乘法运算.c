#include <stdio.h>
/**
 * 乘法运算
 * @return
 */
int main() {
   // 定义变量
   int a, b;
   // 输入整数
   printf("请输入第一个整数:\n");
   scanf("%d", &a);

   printf("请输入第二个整数:\n");
   scanf("%d", &b);

   printf("a*b的积是:%d\n", a*b);
   return 0;
}