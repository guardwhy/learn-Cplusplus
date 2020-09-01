#include <iostream>
#include <cstring>

using namespace std;
/**
 * 虚析构和纯虚析构
 * @return
*/
// 基类:Person
class Person{
public:
    // 构造函数
    Person(){
        cout << "Person构造函数调用"<< endl;
    }
    // 纯虚函数
    virtual void speak() = 0;
    // 虚析构
    /*virtual ~Person(){
        cout << "Person析构函数调用"<< endl;
    }*/

    // 纯虚析构需要有声明,也需要有实现.如果函数体中有了纯虚析构,那么这个函数也属于抽象类.
    virtual ~Person() = 0;
};
// 类外实现函数
Person::~Person() {
    cout << "Person纯虚析构函数调用" << endl;
}

// 派生类:Student
class Student: public Person{
public:
    // 成员变量
    char * m_Name;
    // 构造函数
    Student(char * name){
        cout << "Student构造函数调用"<< endl;
        this->m_Name = new char(strlen(name) + 1);
        // 拷贝构造
        strcpy(this->m_Name, name);
    }

    // 虚函数重写
    virtual void speak(){
        cout << this->m_Name <<"正在学习!!!"<< endl;
    }
    // 纯虚析构
    ~Student(){
        // 条件判断
        if(this->m_Name != NULL){
            cout << "Student析构函数调用"<< endl;
            delete[] this->m_Name;
            this->m_Name = NULL;
        }
    }
};
int main() {
    // 创建对象
    Person *pst = new Student("curry");
    pst->speak();
    // 释放堆内存
    delete pst;
    return 0;
}