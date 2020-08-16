#include <stdio.h>
/**
 * 数组最值
 * @return
 */
// 宏定义
#define NUMBER 5 // 学生人数

int main() {
    // 定义变量
    int i;
    // NUMBER个学生的分数
    int tensu[NUMBER];

    // 定义最大值和最小值
    int max, min;

    printf("请输入%d名学生的分数。\n", NUMBER);
    // 遍历操作
    for(i=0; i<NUMBER; i++){
        printf("%2d号:", i+1);
        scanf("%d", &tensu[i]);
    }

    // 设定tensu[0]为max,min
    max = min = tensu[0];
    // 遍历循环
    for(i=1; i<NUMBER; i++){
        // 条件判断
        if(tensu[i] > max) max = tensu[i];
        if(tensu[i] < min) min = tensu[i];
    }

    printf("最高分是:%d\n", max);
    printf("最低分是:%d\n", min);
    return 0;
}