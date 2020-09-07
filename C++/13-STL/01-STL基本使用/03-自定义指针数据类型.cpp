#include <iostream>
#include <vector>
using namespace std;
/**
 * 自定义指针数据类型
 * @return
*/
// 自定义数据类型:Person
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
};

int main() {
    // 定义person*类型容器
    vector<Person*> v;

    // 创建对象
    Person p1("curry", 10);
    Person p2("kobe", 41);
    Person p3("james", 36);
    Person p4("Duncan", 44);

    // 插入数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);

    // 遍历容器
    for(vector<Person*>::iterator it = v.begin(); it != v.end(); it++){
        // 输出容器元素
        cout << "姓名:" << (*it)->m_Name << ", 年龄:" << (*it)->m_Age << endl;
    }
    return 0;
}