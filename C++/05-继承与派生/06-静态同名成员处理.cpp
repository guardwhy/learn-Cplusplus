#include <iostream>
using namespace std;
/**
 * 静态同名成员处理
 * @return
 */
// 创建Person类
class Person{
public:
    // 静态成员变量
    static int m_Number;

    // 成员函数
    static void function(){
        cout << "Person下的function调用"<< endl;
    }
    static void function(int a){
        cout << "Person下的function(int a)调用"<< endl;
    }
};
// 类外初始化
int Person::m_Number = 10;

// 派生类Student
class Student: public Person{
public:
    // 静态成员变量
    static int m_Number;
    // 无参构造
public:
    // 成员函数
    static void function(){
        cout << "Student下的function调用"<< endl;
    }
};
// 初始化静态成员变量
int Student::m_Number = 30;

// 静态同名的成员变量
void sameNumber(){
    // 创建对象
    Student stu1;
    // 输出成员变量
    cout<< "派生类的成员变量:"<< stu1.m_Number << endl;
    // 访问父类中同名的成员变量,需要加作用域
    cout << "基类的成员变量:"<< stu1.Person::m_Number << endl;

    // 通过类名访问
    cout<< "派生类的成员变量:"<< Student::m_Number << endl;
    cout << "基类的成员变量:"<< Student::Person::m_Number << endl;
}

// 静态同名成员函数
void sameFunction(){
    // 创建对象
    Student stu2;
    // 调用成员函数
    stu2.function();
    stu2.Person::function();
    // 调用基类的
    stu2.Person::function(10);

    // 通过类名调用
    Student::function();
    // 调用基类成员函数
    Student::Person::function();
    // 第一个双冒号代表通过类名方式访问,第二个双冒号代表 父类作用域
    Student::Person::function(10);
}

int main() {
    // 调用函数
    sameNumber();
    cout << "---------------"<< endl;
    sameFunction();
    return 0;
}