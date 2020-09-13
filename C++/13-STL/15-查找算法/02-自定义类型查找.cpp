#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/**
 * 自定义类型数据查找
 * @return
*/
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
    bool operator==(const Person &p){
        return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
    }
};

int main() {
    // 定义vector容器
    vector<Person> v1;
    // 对象赋值
    Person p1("curry", 10);
    Person p2("kobe", 41);
    Person p3("james", 36);
    Person p4("Rondo", 33);
    Person p5("Duncan", 21);
    // 添加元素
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);
    v1.push_back(p5);

    // 查找p4的数据
    Person p("Rondo", 33);
    vector<Person>::iterator pos = find(v1.begin(), v1.end(), p);
    // 条件判断
    if(pos != v1.end()){
        cout << "姓名是:" << (*pos).m_Name << ", 年龄是:" << pos->m_Age << endl;
    }
    return 0;
}