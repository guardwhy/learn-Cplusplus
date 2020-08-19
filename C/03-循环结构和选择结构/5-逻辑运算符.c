#include <stdio.h>
/**
 * 逻辑运算符
 * @return
 */
int main() {
    // 定义变量
    int month;
    puts("请输入月份:");
    scanf("%d", &month);

    // 条件判断,逻辑与运算符
    if(month >= 3 && month <= 5){
        printf("%d月是春季.\n", month);
    } else if(month >= 6 && month <= 8){
        printf("%d月是夏季.\n", month);
    }else if(month >= 9 && month <= 11){
        printf("%d月是秋季.\n", month);
    // 条件判断,逻辑或运算符
    }else if(month == 1 ||  month ==  2 || month == 12){
        printf("%d月是冬季.\n", month);
    } else{
        printf("%d月份不存在!!\n", month);
    }
    return 0;
}