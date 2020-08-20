#include <stdio.h>
/**
 * 二维数字的访问方式
 * @return
 */
int main() {
    // 对于M行N列的二维数组,a[0][0]是数组的第一个元素,a[m-1][n-1]是最后一个元素
    // 定义数组,并初始化数组
    int a[3][4] = {{1,2,3,4},{10,20,30,40},{87,67,33,89}};
    // 遍历循环
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            // 求数组值的地址值
            printf("%p ", &a[i][j]);
        }
        putchar(10);
    }
    printf("==================\n");
    // 输出数组地址
    printf("a = %p  a+1 = %p  a+2 = %p\n",a,a+1,a+2);
    printf("a = %p  &a[0] = %p\n",a,&a[0]);
    printf("a[0] = %p  a[0]+1 = %p  a[0]+2 = %p\n",a[0],a[0]+1,a[0]+2);
    printf("a[0] = %p  &a[0][0] = %p\n",a[0],&a[0][0]);


    printf("&&&&&&&&&&&&&&&&&&&&&&&\n");
    printf("a+1 = %p\n",a+1);
    printf("(a+1)+1 = %p\n",(a+1)+1);
    printf("*(a+1) +1 = %p\n",*(a+1)+1);

    printf("a[1] = %p\n",a[1]);
    printf("a[1] +1 = %p\n",a[1]+1);
    printf("&a[1] +1 = %p\n",&a[1]+1);

    return 0;
}