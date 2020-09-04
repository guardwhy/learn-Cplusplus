#include <iostream>
using namespace std;
/**
 * 类模板成员函数类外实现
 * @return
*/
// 基类:Person
template <class T1, class T2>
class Person{
public:
    // 成员变量
    T1 m_Name;
    T2 m_Age;
public:
    // 构造函数
    Person(T1 name, T2 age);
    // 调用函数
    void display();
};
// 类外实现
template <class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age) {
    this->m_Name = name;
    this->m_Age = age;
}

template <class T1, class T2>
void Person<T1,T2>::display() {
    // 输出结果
    cout <<"姓名:"<< this->m_Name << ", 年龄:"<< this->m_Age << endl;
}
int main() {
    // 创建对象
    Person<string, int> p1("curry", 10);
    // 调用函数
    p1.display();
    return 0;
}