#include <stdio.h>
#include <string.h>
/**
 * 结构体数组
 * @return
*/
// 数组结构体
typedef struct student{
    int num; // 数量
    char name[30]; // 姓名
    char sex; // 性别
    float score; // 分数
}STUDENT;

int main() {
    // 定义结构体STUDENT,并且初始化变量
    STUDENT stu[4] = {
            {1001,"kobe",'x',100},
            {1002,"james",'x',99},
            {1003,"Curry",'m',96},
            {1004,"Leonard",'x',95},
    };

    // 遍历数组
    for(int i=0; i<sizeof(stu)/sizeof(stu[0]); i++){
        // 输出元素
        printf("学号:%d, 姓名:%s, 性别:%c, 成绩:%.2f\n",stu[i].num, stu[i].name,stu[i].sex,stu[i].score);
    }

    printf("***************************\n");

    stu[0].num = 1005;
    // 复制操作
    strcpy(stu[0].name, "guardwhy");
    stu[0].sex = 'x';
    stu[0].score = 80.00;

    // 遍历数组
    for(int i=0; i<sizeof(stu)/sizeof(stu[0]); i++){
        printf("学号:%d, 姓名:%s, 性别:%c, 成绩:%.2f\n", stu[i].num, stu[i].name, stu[i].sex, stu[i].score);
    }
    return 0;
}