#include <stdio.h>
/**
 * 传递一维数组
 * @return
*/
void ArraySort(int *p, int n){
    // 定义临时变量
    int temp;
    // 遍历操作
    for(int i=0; i<n-1; i++){
        
        for(int j=i+1; j<n; j++){
            // 条件判断
            if(p[i] > p[j]){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

int main() {
    // 定义数组且初始化数组
    int array[10] = {9,23,16,20,10,35,65,39,0,8};
    // 遍历操作
    printf("排序前:");
    for(int i=0; i<10; i++)
        printf("%d ",  array[i]);

    putchar(10);

    // 调用排序函数
    ArraySort(array, 10);

    // 遍历数组
    printf("排序后:");
    for(int i=0; i<10; i++){
        printf("%d ", array[i]);
    }
    return 0;
}