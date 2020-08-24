#include <stdio.h>
#include <stdlib.h>
/**
 * typedef深度化
 * @return
*/
// 给int取别名
typedef int INT6 ;

// 定义函数test01()
void test01(){
    // 定义变量
    int a = 10;
    INT6 num = 20;
    // 输出变量
    printf("a的值是:%d\n",a);
    printf("num的值是:%d\n",num);
}

// 结构体数据类型student
typedef struct student{
    int num;
    char name[16];
}STU1;

typedef struct {
    int num;
    char name[16];
}STU2;

// 定义test02()函数
void test02(){
    typedef struct student STU3;
    // 结构体变量
    struct student Curry = {10, "Curry"};
    STU2 james = {30, "James"};
    STU3 Paul = {20, "Paul"};
    // 输出结果
    printf("数量num:%d, 姓名:%s\n", Curry.num, Curry.name);
    printf("数量num:%d, 姓名:%s\n", james.num, james.name);
    printf("数量num:%d, 姓名:%s\n", Paul.num, Paul.name);
}

// 定义结构体数据类型stu
typedef struct stu{
    int num;
    char name[16];
}STU4, *ST;

void test03(){
    STU4 curry = {10, "Curry"};  // STU4 = struct stu
    ST s = &curry; // ST = struct stu*(指针类型)
}

int main(int argc, char *argv[]){
    // test01();   // 调用test01()函数
    // test02(); // 调用test02()函数
    return 0;
}