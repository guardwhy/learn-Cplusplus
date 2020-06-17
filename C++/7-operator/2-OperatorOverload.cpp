#include <iostream>
/**
 * 左移运算符重载
 */
using namespace std;

class Person{
    // 友元函数
    friend ostream& operator<<(ostream& cout, Person& p1);
private:
    // 定义成员变量
    int m_A;
    int m_B;
public:
    // 构造函数
    Person(int a, int b):m_A(a), m_B(b){}
};

// 全局函数重载
ostream& operator<<(ostream& cout, Person& p1){
    cout << "m_A=" << p1.m_A << "m_b="<< p1.m_B;
    return cout;
}
int main() {
    // 1.创建p1对象
    Person p1(10, 20);
    // 2.输出结果
    cout << p1 << endl;

    return 0;
}