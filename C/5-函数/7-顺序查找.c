#include <stdio.h>
/**
 * 顺序查找
 * @return
*/
#define NUMBER 5 // 元素个数
#define FAILED -1 // 查找失败

/**
 * 查找元素
*/
int search(const int v[], int key, int n){
    int i = 0;
    while (1){
        if(i == n)
            return FAILED;  // 查找失败
        if(v[i] == key)
            return i; // 查找成功
        i++;
    }
}

int main() {
    // 定义变量
    int i, ky, index;
    // 定义数组
    int arr[NUMBER];

    // 遍历操作
    for(i=0; i<NUMBER; i++){
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }

    puts("请输入你要查找的元素:");
    scanf("%d", &ky);

    // 搜索函数
    index = search(arr, ky, NUMBER);

    // 条件判断
    if(index == FAILED){
        puts("查找失败.");
    } else{
        printf("%d是数组中的第%d号元素。\n", ky, index+1);
    }
    return 0;
}