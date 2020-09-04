#include <iostream>
#include<cstring>
using namespace std;
/**
 * 友元函数类內实现
 * @return
*/
// 基类:Person
template <class T1, class T2>
class Person{
    // 友元函数
    friend void display(Person<T1, T2> &p){
        cout << "姓名:"<< p.m_Name << ", 年龄:"<< p.m_Age << endl;
    }
private:
    // 成员变量
    T1 m_Name;
    T2 m_Age;
public:
    // 构造函数
    Person(T1 name, T2 age){
        this->m_Name = name;
        this->m_Age = age;
    }
};

int main() {
    // 创建对象
    Person<string, int> p("curry", 10);
    // 调用函数
    display(p);
    return 0;
}