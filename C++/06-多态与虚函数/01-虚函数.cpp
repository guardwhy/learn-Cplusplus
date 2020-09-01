#include <iostream>
#include <string>
using namespace std;
/**
 * 虚函数
 * @return
*/
// 基类:Person
class Person{
public:
    // 成员变量
    string m_Name;
    int m_Age;
public:
    // 构造函数
    Person(string name, int age);
    // 声明虚函数
    virtual void display();
};
// 定义构造函数实现
Person::Person(string name, int age):m_Name(name), m_Age(age){}
// 虚函数实现
void Person::display() {
    cout <<"姓名:"<<m_Name << ", 年龄:"<< m_Age << endl;
}

// 派生类Student
class Student: public Person{
    // 成员变量
private:
    int m_Score; // 分数
public:
    // 声明构造函数
    Student(string name, int age, int score);
    // 声明虚函数
    virtual void display();
};

// 定义构造函数
Student::Student(string name, int age, int score):Person(name, age), m_Score(score){}
void Student::display() {
    // 输出结果
    cout << "姓名:" << m_Name << ", 年龄是:"<< m_Age << ", 分数是:"<< m_Score << endl;
}

int main(){
    // 创建对象
    Person *pst = new Person("curry", 10);
    pst->display();

    pst = new Student("James", 8, 90);
    pst->display();

    // 释放堆空间
    delete pst;
}