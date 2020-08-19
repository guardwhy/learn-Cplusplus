#include <stdio.h>
/**
 * 成员的初始化
 * @return
*/
#define NAME_LEN 64 // 姓名的字符数

/**
 * 表示学生的结构体
 */
struct student{
    char name[NAME_LEN]; // 姓名
    int height; // 身高
    float weight; // 体重
    long schols; // 奖学金
};

int main() {
    // 定义结构体变量,并且初始化变量
    struct student curry = {"Curry", 191, 83.9, 3000};

    printf("姓名=%s\n", curry.name);
    printf("身高=%d\n", curry.height);
    printf("体重=%.1f\n", curry.weight);
    printf("奖学金=%ld\n", curry.schols);

    return 0;
}