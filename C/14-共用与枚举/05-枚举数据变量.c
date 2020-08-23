#include <stdio.h>
/**
 * 枚举类型变量与初始化
 * @return
*/

// 枚举数据类型
enum DAY{
    MON = 1, TUE,WED,THU,FRI,SAT,SUN
};

int main() {
    // 输出结果
    printf("%d, %d, %d, %d, %d, %d, %d\n", MON, THU, WED, THU, FRI, SAT, SUN);
    // 赋值操作
    enum DAY day = MON;
    // 输出结果
    printf("day=%d\n", day);
    return 0;
}