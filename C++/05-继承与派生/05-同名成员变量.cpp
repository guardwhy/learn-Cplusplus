#include <iostream>
using namespace std;
/**
 * 同名成员变量
 * @return
*/
// 创建Person类
class Person{
public:
    // 成员变量
    int m_Number;
    // 构造函数
    Person(){
        this->m_Number = 20;
    }
    // 成员函数
    void function(){
        cout << "Person下的function调用"<< endl;
    }
    void function(int a){
        cout << "Person下的function(int a)调用"<< endl;
    }
};

// 派生类Student
class Student: public Person{
public:
    // 成员变量
    int m_Number;
    // 无参构造
public:
    Student(){
        this->m_Number = 30;
    }
    // 成员函数
    void function(){
        cout << "Student下的function调用"<< endl;
    }
};

// 同名的成员变量
void sameNumber(){
    // 创建对象
    Student stu1;
    // 输出成员变量
    cout<< "派生类的成员变量:"<< stu1.m_Number << endl;
    // 访问父类中同名的成员变量,需要加作用域
    cout << "基类的成员变量:"<< stu1.Person::m_Number << endl;
}

// 同名成员函数
void sameFunction(){
    // 创建对象
    Student stu2;
    // 调用成员函数
    stu2.function();
    // 调用基类的
    stu2.Person::function(10);
}

int main() {
    // 调用函数
    sameNumber();
    sameFunction();
    return 0;
}