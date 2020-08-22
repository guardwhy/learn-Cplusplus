#include <stdio.h>
#include <string.h>
/**
 * 初始化及访问
 * @return
*/
// 学生结构体
typedef struct student{
    char name[30]; // 成员姓名
    char sex; // 成员性别
    int age; // 成员年龄
    float high; // 成员身高
}STUDENT;

int main()
{
    // 定义结构体STUDENT,并且初始化变量
    STUDENT stu = {"curry", 'x', 10, 191};
    // 输出结果
    printf("name=%s, sex=%c, age=%d, high=%.2f\n", stu.name, stu.sex, stu.age, stu.high);
    // 复制数据
    strcpy(stu.name, "kobe");
    stu.sex = 'x';
    stu.age = 35;
    stu.high = 198;
    // 输出结果
    printf("name=%s, sex=%c, age=%d, high=%.2f\n", stu.name, stu.sex, stu.age, stu.high);

    printf("请输入姓名:");
    scanf("%s", stu.name);
    getchar();

    printf("请输入性别:");
    scanf("%c", &stu.sex);
    printf("请输入年龄:");
    scanf("%d", &stu.age);

    printf("请输入身高:");
    scanf("%f", &stu.high);
    // 输出结果
    printf("name=%s, sex=%c, age=%d, high=%.2f\n", stu.name, stu.sex, stu.age, stu.high);
    return 0;
}
