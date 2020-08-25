#include <stdio.h>
/**
 * 结构体数据类型
 * @return
*/
// 定义结构体student
struct Student{
    // 成员变量
    char* name;
    int age;
    float score;
};

void display(struct Student stu) {
    // 输出结果
    printf("%s的年龄是%d,成绩是%.2f\n",stu.name, stu.age, stu.score);
}

int main() {
    // 定义结构体变量
    struct Student stu;
    // 给结构体成员变量赋值
    stu.name = "curry";
    stu.age = 10;
    stu.score = 98.00;
    // 调用函数
    display(stu);
    return 0;
}
