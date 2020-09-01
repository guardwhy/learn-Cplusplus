#include <iostream>
using namespace std;
/**
 * 智能指针
 * @return
*/
// 基类:Person
class Person{
   // 成员变量
public:
    int m_Age;
public:
    // 构造函数
    Person(int age){
        cout << "Person构造函数调用" << endl;
        this->m_Age = age;
    }
    // 成员函数
    void display(){
        // 输出年龄
        cout << "年龄是:"<< this->m_Age << endl;
    }
    // 析构函数
    ~Person(){
        cout << "Person的析构函数调用" << endl;
    }
};
// 智能指针
class smartPointer{
public:
    // Person指针对象
    Person *m_Person;
public:
    // 构造函数
    smartPointer(Person *p){
        this->m_Person = p;
        cout << "smartPointer构造函数被调用"<< endl;
    }

    // 重载->运算符
    Person* operator->(){
        return this->m_Person;
    }
    // 重载* 运算符
    Person& operator*(){
        return *this->m_Person;
    }

    // 析构函数
    ~smartPointer(){
        cout << "smartPointer析构函数被调用...."<< endl;
        if(this->m_Person != NULL){
            delete this->m_Person;
            this->m_Person = NULL;
        }
    }
};
// 声明函数
void smartFunction01(){
    // 创建对象
    smartPointer sm(new Person(171));
    sm->display();
    (*sm).display();
}
int main() {
    // 调用函数
    smartFunction01();
    return 0;
}