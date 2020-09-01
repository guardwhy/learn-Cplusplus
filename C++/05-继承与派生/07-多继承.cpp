#include <iostream>
using namespace std;
/**
 * 多继承
 * @return
*/
// 创建基类Person类
class Person{
public:
    // 成员变量
    string name;
    // 构造函数
    Person(){
        this->name = "Curry";
    }
};

// 基类Student
class Student{
public:
    // 成员变量
    string name;
    // 构造函数
    Student(){
        this->name = "kobe";
    }
};

// 多继承
class boyStudent: public Person, public Student{
public:
    // 成员变量
    int age;
    int score;
};

int main() {
    // 创建对象
    boyStudent stu1;
    // 输出基类的成员变量
    cout << "Person的姓名是:"<< stu1.Person::name << endl;
    cout << "Student的姓名是:"<< stu1.Student::name << endl;
    return 0;
}