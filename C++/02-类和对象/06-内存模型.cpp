#include <iostream>
#include <string.h>
using namespace std;
/**
 * sizeof 获取对象所占内存的大小
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
    void setName(string name);
    void setAge(int age);
    void setScore(float score);
    void display();
};

void Student::setName(string name) {
    M_name = name;
}

void Student::setAge(int age) {
    M_age = age;
}

void Student::setScore(float score) {
    M_score = score;
}

void Student::display() {
    cout << M_name<<"年龄是"<<M_age<<",成绩是"<<M_score<<endl;
}

int main() {
    // 在栈上创建对象
    Student stu;
    // 输出
    cout << sizeof(stu) << endl;    // 40
    // 在堆上创建对象
    Student *pstu = new Student();
    cout << sizeof(*pstu) << endl;  // 40
    // 输出类的大小
    cout << sizeof(Student) << endl;    // 40
    // 删除对象
    delete pstu;
    return 0;
}