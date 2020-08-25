#include <iostream>
using namespace std;
/**
 * 通过class关键字定义类
 * @return
*/
// 定义结构体student
class Student{
public:
    // 成员变量
    char *name;
    int age;
    float score;

    void display() {
        // 输出结果
        cout << "姓名:"<< name << endl << "年龄:"<< age << endl << "分数:"<< score << endl;
    }
};

int main() {
    // 定义结构体变量
    Student stu;
    // 给结构体成员变量赋值
    stu.name = "curry";
    stu.age = 10;
    stu.score = 98.00;
    // 调用函数
    stu.display();
    return 0;
}