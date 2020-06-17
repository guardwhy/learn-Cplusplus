#include <iostream>
/**
 * 指针运算符重载
 */
using namespace std;

// 定义Person
class Person{
public:
    // 成员变量
    int m_Age;
   // 代参构造
   Person(int age){
       cout << "Person构造函数调用" << endl;
       this->m_Age = age;
   }

   // 定义showAge()函数
   void showAge(){
       cout << "m_Age=" << this->m_Age << endl;
   }

   // 析构函数
   ~Person(){
       cout<< "Person析构函数被调用" << endl;
   }
};

// 智能指针
class smartPointer{
public:
    // 定义指针变量
    Person * m_Person;
    // 构造函数
    smartPointer(Person *p){
        this->m_Person = p;
        cout << "smartPointer构造函数调用"<<endl;
    }
    // 重载->运算符
    Person * operator->(){
        return this->m_Person;
    }

    // 重载* 运算符
    Person& operator*(){
        return *this->m_Person;
    }

    ~smartPointer(){
        cout << "smartPointer析构函数调用" << endl;
        // 条件判断
        if(this->m_Person!=NULL){
            delete this->m_Person;
            this->m_Person = NULL;
        }
    }
};
int main() {
    // 创建对象
    smartPointer sm(new Person(172));
    // 智能指针 可以托管new出来的对象，创建好的堆区对象 不用写delete
    sm->showAge();
    (*sm).showAge();
    return 0;
}