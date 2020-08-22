#include <stdio.h>
/**
 * 自定义名字数据类型命名
 * @return
 */
int main() {
    // 自定义变量
    typedef int STU;
    STU a;
    // 输出结果
    printf("sizeof(a)=%ld sizeof(STU)=%ld\n", sizeof(a), sizeof(STU));    // sizeof(a)=4 sizeof(stu)=4

    // 自定义数组
    typedef int ARRAYINT[9];
    ARRAYINT array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // 输出地址值
    printf("sizeof(ARRAYINT)=%ld, sizeof(array)=%ld\n", sizeof(ARRAYINT),sizeof(array));

    // 遍历数组
    for(int i=0; i<10; i++){
        printf("%d ", array[i]);
    }
    return 0;
}