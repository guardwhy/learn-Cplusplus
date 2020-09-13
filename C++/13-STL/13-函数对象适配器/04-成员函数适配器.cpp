#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/**
 * 成员函数适配器
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
    // 添加年龄
    void addAge(){
        this->m_Age++;
    }
    // 打印函数
    void showPerson(){
        // 输出姓名和年龄
        cout << "年龄:"<<this->m_Name << ", 年龄:"<<this->m_Age<< endl;
    }
};

int main() {
    // 定义vector容器
    vector<Person> v1;
    // 给对象赋值
    Person p1("curry", 10);
    Person p2("kobe", 41);
    Person p3("james", 35);
    // 插入元素
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);

    //利用mem_fun_ref 将成员函数进行适配
    cout << "容器元素:" << endl;
    for_each(v1.begin(), v1.end(), mem_fun_ref(&Person::showPerson));
    for_each(v1.begin(), v1.end(), mem_fun_ref(&Person::addAge));
    // cout <<"----------------------"<< endl;
    cout << "容器元素:"<< endl;
    for_each(v1.begin(), v1.end(), mem_fun_ref(&Person::showPerson));
    return 0;
}