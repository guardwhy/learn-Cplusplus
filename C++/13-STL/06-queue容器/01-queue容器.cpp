#include <iostream>
#include <queue>
#include <string>
using namespace std;

// 基类:Person
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
    // 创建队列
    queue<Person> q;
    // 添加元素
    Person p1("Curry", 10);
    Person p2("kobe", 41);
    Person p3("James", 35);
    Person p4("Duncan", 46);
    Person p5("Rondo", 18);

    // 入队操作
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);
    q.push(p5);

    // 输出队列大小
    cout << "队列大小为:" << q.size() << endl;   // 队列大小为:5

    // 查看对头 队尾执行出队
    while (!q.empty()){
        // 对头出队
        Person front = q.front();
        cout << "姓名:" << front.m_Name << ", 年龄:" << front.m_Age << endl;

        // 队尾出队
        Person back = q.back();
        cout << "姓名:" << back.m_Name << ", 年龄:" << back.m_Age << endl;

        // 出队
        q.pop();
    }

    cout << "队列大小为:" << q.size() << endl;   // 队列大小为:0
    return 0;
}