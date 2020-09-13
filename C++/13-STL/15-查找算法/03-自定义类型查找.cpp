#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/**
 * 自定义数据类型查找
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

class Compare: public binary_function<Person*, Person*, bool>{
public:
    bool operator()(Person *p1, Person *p2)const {
        // 条件判断
        if(p1->m_Name == p2->m_Name && p1->m_Age == p2->m_Age){
            return true;
        }
        return false;
    }
};

int main() {
    // 定义vector容器
    vector<Person*> v1;
    // 对象赋值
    Person p1("curry", 10);
    Person p2("kobe", 41);
    Person p3("james", 36);
    Person p4("Rondo", 33);
    Person p5("Duncan", 21);
    // 添加元素
    v1.push_back(&p1);
    v1.push_back(&p2);
    v1.push_back(&p3);
    v1.push_back(&p4);
    v1.push_back(&p5);

    // 对象赋值操作
    Person *person = new Person("kobe", 41);
    // 查找位置
    vector<Person*>::iterator pos = find_if(v1.begin(), v1.end(), bind2nd(Compare(),person));
    // 条件判断
    if(pos != v1.end()){
        cout << "姓名:"<< (*pos)->m_Name << ",年龄:" << (*pos)->m_Age << endl;
    }else{
        cout << "未找到容器的元素..."<< endl;
    }
    return 0;
}