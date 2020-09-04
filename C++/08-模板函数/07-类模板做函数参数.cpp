#include <iostream>
using namespace std;
/**
 * 类模板做函数参数
 * @return
 */
template <class T1, class T2>
class Person{
public:
    // 成员变量
    T1 m_Name;
    T2 m_Age;
public:
    // 构造函数
    Person(T1 name, T2 age){
        this->m_Name = name;
        this->m_Age = age;
    }
    // 调用函数
    void display(){
        cout << "姓名:" << this->m_Name << ", 年龄:"<< this->m_Age << endl;
    }
};

// 1.指定传入类型
void property01(Person<string, int> &p){
    p.display();
}
// 声明函数
void  classTemplate01(){
    // 创建对象
    Person<string,int> p1("curry", 10);
    property01(p1);
}

// 2.将参数模板化
template <class T1, class T2>
void property02(Person<T1,T2> &p){
   p.display();
}
// 声明函数
void  classTemplate02(){
    // 创建对象
    Person<string,int> p1("kobe", 41);
    property02(p1);
}

// 将类模板化
template <class T>
void property03(T &p){
    p.display();
}

// 声明函数
void classTemplate03(){
    // 创建对象
    Person<string,int> p1("James", 33);
    property03(p1);
}

int main() {
    // 调用函数
    classTemplate01();
    classTemplate02();
    classTemplate03();
    return 0;
}