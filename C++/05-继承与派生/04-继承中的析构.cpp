#include <iostream>
using namespace std;
/**
 * 继承中的析构
 * @return
*/
// 创建Person基类
class Person{
public:
    // 成员变量
    string m_Name;
    // 有参构造
    Person(string name){
        this->m_Name = name;
        cout << "Person代参构造函数调用"<< endl;
    }
    // 析构函数
    ~Person(){
        cout << "Person析构函数调用" << endl;
    }
};

// 创建Student派生类
class Student: public Person{
public:
    // 利用初始化列表方式,显示调用父类中的其他的构造函数
    Student(string name="curry"):Person(name){
        cout << "Student默认构造函数调用"<< endl;
    }
    // 调用析构函数
    ~Student(){
        cout << "Student析构函数调用" << endl;
    }
};

int main() {
    // 创建对象
    Student st1;
    // 输出结果
    cout << "姓名:" << st1.m_Name << endl;
    /**
     *  Person代参构造函数调用
        Student默认构造函数调用
        姓名:curry
        Student析构函数调用
        Person析构函数调用
     */
    return 0;
}