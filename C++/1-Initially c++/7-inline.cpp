#include <iostream>
/**
 * 宏函数和普通函数
 */
using namespace std;
// 定义宏函数
#define SQR(x) ((x)*(x))

// 定义sqr函数
int sqr(int x)
{
    return x*x;
}

int main()
{
    // 定义变量
    int i=0;
    // 条件判断
    while(i<5)
    {
    printf("%d\n",SQR(i++));
        //printf("%d\n",sqr(i++));
    }
    return 0;
}