#include <stdio.h>
#include <string.h>
/**
 * 结构体变量
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
    // 定义结构体变量
    struct student curry;
    strcpy(curry.name, "Curry");
    // 对象名.成员名
    curry.height = 191; // 身高
    curry.weight = 83.9; // 体重
    curry.schols = 1000; // 奖学金

    printf("姓名=%s\n", curry.name);
    printf("身高=%d\n", curry.height);
    printf("体重=%.1f\n", curry.weight);
    printf("奖学金=%ld\n", curry.schols);

    return 0;
}