#include <stdio.h>
/**
 * 二维数组的存储
 * @return
 */
int main() {
    // 定义数组,并且初始化
    int a[3][4] = {{91,56,63,54},{61,72,93,84},{91,42,73,34}};
    // 遍历数组
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%2d ", a[i][j]);
        }
        putchar(10);
    }

    // 地址值
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%p ",&a[i][j]);
        }
        putchar(10);
    }

    return 0;
}