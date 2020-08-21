#include <stdio.h>
/**
 * 猴子吃桃(递归)
 * @return
*/
// 调用函数
int eatCount(int day){
    // 条件判断
    if(day == 10)
        return 1;
    else
        return (eatCount(++day)+1)*2;
}


int main() {
    // 定义计数器
    int count = eatCount(1);
    // 输出结果
    printf("第一天共摘了多少个桃子:%d\n", count);
    return 0;
}