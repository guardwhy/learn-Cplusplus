#include <stdio.h>
#include <unistd.h>
/**
 * break作用
 * @return
 */
int main() {
    // 定义变量
    int waterLevel;
    // 遍历条件
    for(waterLevel = 10; waterLevel < 100; waterLevel+=5){
        printf("当前的水位是%d\n", waterLevel);
        // 条件判断
        if(waterLevel == 95){
            break;
        }
        sleep(1);
    }

    printf("开阀放水。。\n");
    return 0;
}