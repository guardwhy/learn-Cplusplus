#include <stdio.h>
/**
 * 哨兵查找
 * @return
 */
// 宏定义
#define NUMBER 5 // 元素个数
#define FAILED -1 // 查找失败

// 查找元素
int search(int v[], int key, int n)
{
    int i = 0;
    v[n] = key; // 添加哨兵
    while (1){
        if(v[i] == key)
            break;
        i++;
    }

    return (i < n) ? i:FAILED;
}


int main() {
    // 定义变量
    int i, ky, idx;
    int vx[NUMBER+1];

    // 遍历数组
    for(i=0; i<NUMBER; i++){
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }

    printf("要查找的值:");
    scanf("%d", &ky);

    // 条件判断
    if((idx = search(vx, ky, NUMBER)) == FAILED)
        puts("\a查找失败。");
    else
        printf("%d是数组的第%d号元素。\n", ky, idx + 1);
    return 0;
}