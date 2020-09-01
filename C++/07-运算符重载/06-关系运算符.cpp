#include <iostream>
#include <cstring>
using namespace std;
/**
 * 关系运算符重载
 * @return
*/

// 基类: Person
class Person{
public:
    // 成员变量
    string m_Name;
    int m_Age;
public:
    // 构造函数
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }

    // 重载 ==
    bool operator==(Person &p){
        return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
    }
    bool operator!=(Person &p){
        return !(this->m_Name == p.m_Name && this->m_Age == p.m_Age);
    }
};

// 声明对象
void relationOperator01(){
    // 创建对象
    Person p1("curry", 10);
    Person p2("curry", 10);
    // 条件判断
    if(p1 == p2){
        cout << "p1 == p2" << endl;
    }else{
        cout << "p1 != p2" << endl;
    }

    // 条件判断
    if(p1 != p2){
        cout << "p1 != p2" << endl;
    }else{
        cout << "p1 == p2" << endl;
    }
}
int main() {
    // 调用函数
    relationOperator01();
    return 0;
}