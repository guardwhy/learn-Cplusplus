#include <stdio.h>
/**
 * 数组赋值
 * @return
*/
// 定义结构体变量Array
struct Array{
    int a[8];
};

int main() {
    // 结构体数组初始化
    struct Array array = {1, 2, 3, 4, 5, 6, 7};
    // 赋值操作
    struct Array array2 = array;
    // 遍历数组
    for(int i=0; i<8; i++){
        printf("%d ", array2.a[i]);
    }
    return 0;
}