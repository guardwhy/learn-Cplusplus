#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;
/**
 * 自定义List排序
 * @return
*/
// 基类:Person
class Person{
public:
    // 成员变量
    string m_Name;
    int m_Age;
    int m_Height;
public:
    // 构造函数
    Person(string name, int age, int height){
        this->m_Name = name;
        this->m_Age = age;
        this->m_Height = height;
    }

    bool operator==(const Person &p){
        // 条件判断
        if(this->m_Name == p.m_Name && this->m_Age == p.m_Age && this->m_Height == p.m_Height){
            return true;
        }
        return false;
    }
};

bool compareTo(Person &p1, Person &p2){
    // 按照年龄升序,如果年龄相同则按照身高降序
    if(p1.m_Age == p2.m_Age){
        return p1.m_Height > p2.m_Height;
    }
    return p1.m_Age < p2.m_Age;
}
int main() {
    // 创建List容器对象
    list<Person> List;
    // 对象赋值
    Person p1("Curry", 10,191);
    Person p2("Kobe", 41,198);
    Person p3("James", 36,203);
    Person p4("Rondo", 33,185);
    Person p5("Duncan", 21,211);
    // 插入数据
    List.push_back(p1);
    List.push_back(p2);
    List.push_back(p3);
    List.push_back(p4);
    List.push_back(p5);
    cout << "排序前:"<< endl;
    for(list<Person>::iterator it = List.begin(); it != List.end(); it++){
        cout << "姓名:" << (*it).m_Name << ",年龄:"<< it->m_Age<<",身高:"<< it->m_Height << endl;
    }

    // 自定义数据类型,必须指定排序规则,按照年龄升序
    List.sort(compareTo);
    cout << "排序后:"<< endl;
    for(list<Person>::iterator it = List.begin(); it != List.end(); it++){
        cout << "姓名:" << (*it).m_Name << ",年龄:"<< it->m_Age<<",身高:"<< it->m_Height << endl;
    }

    // 删除Rondo
    List.remove(p4);
    cout << "------------------------"<< endl;
    cout << "排序后:"<< endl;
    for(list<Person>::iterator it = List.begin(); it != List.end(); it++){
        cout << "姓名:" << (*it).m_Name << ",年龄:"<< it->m_Age<<",身高:"<< it->m_Height << endl;
    }
    return 0;
}