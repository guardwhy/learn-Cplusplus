#include <iostream>
#include <string.h>
using namespace std;
/**
 * 构造函数
 * @return
*/
// 定义类student
class Student{
private:
    // 成员变量
    string M_name;
    int M_age;
    float M_score;

public:
    // 声明构造函数
    Student(string name, int age, float score);

    // 调用函数
    void display();
};

// 定义构造函数
Student::Student(string name, int age, float score) {
    M_name = name;
    M_age = age;
    M_score = score;
}
// 定义成员函数
void Student::display() {
    // 输出结果
    cout << "姓名:" << M_name<< ",年龄:" << M_age <<",分数:" << M_score<< endl;
}
int main() {
    // 创建对象,并且向构造函数传参
    Student stu("kobe", 41, 98);
    // 调用函数
    stu.display();

    // 创建指针对象
    Student *pstu = new Student("Curry", 10, 95);
    // 调用函数
    pstu->display();
    // 删除对象
    delete pstu;
    return 0;
}