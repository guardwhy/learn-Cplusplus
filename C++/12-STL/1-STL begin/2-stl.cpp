#include <iostream>
#include <vector>
/**
 * 自定义数据类型
 */
using namespace std;

// 定义Prson类
class Person{
public:
    // 成员变量
    int m_Age;
    string m_Name;

    // 构造方法
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
};

int main() {
    // 创建对象
    vector<Person>v;
    // 添加数据
    Person p1("curry", 10);
    Person p2("kobe", 20);
    Person p3("james", 30);
    Person p4("jordan", 40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    // 遍历循环
    for (vector<Person>::iterator it = v.begin(); it!= v.end(); it++){
        // 输出年龄和姓名
        cout << "姓名" << (*it).m_Name << "年龄:" << (*it).m_Age << endl;
    }
    return 0;
}