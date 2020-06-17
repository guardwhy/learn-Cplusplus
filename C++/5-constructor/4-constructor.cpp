#include <iostream>

using namespace std;
/**
 * 如果提供了有参构造函数，那么编译器就不提供默认构造函数了，但是依然提供拷贝构造函数.
 * 如果提供了拷贝构造函数，那么编译器就不提供 其他普通构造函数了
 */
class Person
{
public:

    Person()
    {
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(int a)
    {
        cout << "Person的有参构造函数调用" << endl;
    }

    //拷贝构造  //值传递的本质 就是调用 拷贝构造函数
    Person(const Person &p)
    {
        cout << "Person的拷贝构造函数调用" << endl;
        m_Age = p.m_Age; //默认拷贝构造函数  写了这行代码
    }

    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }

    int m_Age;
};

void test01()
{
    Person p1;
    p1.m_Age = 100;

    Person p2 = p1; //隐式转换法    Person p2 = Person (p1);

    cout << "p2的年龄为： " << p2.m_Age << endl;

}
int main() {
    test01();
    cout << "Hello, World!" << endl;
    return 0;
}