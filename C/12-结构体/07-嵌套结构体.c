#include <stdio.h>
/**
 * 嵌套结构体
 * @return
*/
// 数组结构体student
struct student{
    char name[30];
    char sex;
    int age;
    float high;
    struct birthday{
        int year;
        int month;
        int day;
    }birth;
};

int main() {
    struct student stu = {"Curry",'x', 11, 191,{1988,3,14}};
    // 输出结果
    printf("name:%s\nbirthday year = %d\n", stu.name, stu.birth.year);
    return 0;
}