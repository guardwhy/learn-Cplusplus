#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * 指向成员运算符
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


    // 栈内存指针表示法
    STUDENT *ps = &stu;
    // 输出结果
    printf("name=%s, sex=%c, age=%d, high=%.2f\n", ps->name, ps->sex, ps->age, ps->high);
    // 复制数据
    strcpy(stu.name, "kobe");
    ps->sex = 'x';
    ps->age = 35;
    ps->high = 198;
    // 输出结果
    printf("name=%s, sex=%c, age=%d, high=%.2f\n", ps->name, ps->sex, ps->age, ps->high);

    printf("请输入姓名:");
    scanf("%s", ps->name);
    getchar();

    printf("请输入性别:");
    scanf("%c", &ps->sex);
    printf("请输入年龄:");
    scanf("%d", &ps->age);

    printf("请输入身高:");
    scanf("%f", &ps->high);
    // 输出结果
    printf("name=%s, sex=%c, age=%d, high=%.2f\n", ps->name, ps->sex, ps->age, ps->high);

    // 堆内存的指针表示法
    ps = (STUDENT*)malloc(sizeof(STUDENT));
    printf("请输入姓名:");
    scanf("%s", ps->name);
    getchar();

    printf("请输入性别:");
    scanf("%c", &ps->sex);
    printf("请输入年龄:");
    scanf("%d", &ps->age);

    printf("请输入身高:");
    scanf("%f", &ps->high);
    // 输出结果
    printf("name=%s, sex=%c, age=%d, high=%.2f\n", ps->name, ps->sex, ps->age, ps->high);
    
    // 释放内存
    free(ps);
    return 0;
}
