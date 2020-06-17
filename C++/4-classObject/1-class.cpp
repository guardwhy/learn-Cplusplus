#include <iostream>
/**
 * 类和对象
 */
using namespace std;

//通过class关键字定义学生类
class Student{
public:
    // 定义变量
    char *name;
    int age;
    float score;
    // 声明函数
    void say(){
        // 输出结果
        cout << name << "的年龄是:" << age <<", 成绩是:" << score << endl;
    }
};
int main() {
    //创建对象
     Student stu;
    //为类的成员变量赋值
    stu.name = "curry";
    stu.age = 10;
    stu.score = 92.5f;
    //调用函数
    stu.say();
    return 0;
}