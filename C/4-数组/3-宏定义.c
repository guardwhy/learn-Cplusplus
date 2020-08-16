#include <stdio.h>
/**
 * 平均值
 * @return
 */

// 宏定义
#define NUMBER 5 // 学生人数

int main() {
    int i;
    // NUMBER个学生的分数
    int tensu[NUMBER];
    // 总分
    int sum = 0;
    printf("请输入%d名学生的分数。\n", NUMBER);
    // 遍历操作
    for(i=0; i<NUMBER; i++){
        printf("%2d号:", i+1);
        scanf("%d", &tensu[i]);
        // 执行++操作
        sum += tensu[i];
    }

    printf("总分: %5d\n", sum);
    printf("平均分:%5.1f\n", (double)sum / NUMBER);
    return 0;
}