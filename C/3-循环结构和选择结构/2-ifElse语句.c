#include <stdio.h>
/**
 * if..else语句
 * @return
 */
int main() {
    // 定义变量
    int score;
    printf("请输入你的分数: \n");
    scanf("%d", &score);

    // 条件判断
    if(score >= 60){
        printf("恭喜,这次考试你及格了..\n");
    } else{
        printf("抱歉,这么功课你不及格,需要重新考试..\n");
    }
    return 0;
}