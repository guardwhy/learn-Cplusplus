#include <iostream>
/**
 * 加号运算符重载
 */
using namespace std;
// 创建Person类
class Person{
public:
    // 定义成员变量
    int m_A;
    int m_B;
    // 构造函数
    Person(){};

    // 带参构造
    Person(int a, int b):m_A(a), m_B(b){};

    /**
     * 成员函数重载+运算符
     */

     /*Person operator+(Person & p){
         // 定义临时变量
         Person temp;
         temp.m_A = this->m_A + p.m_A;
         temp.m_B = this->m_B + p.m_B;
         return temp;
     }
     */
};

// 通过全局函数实现加号运算符重载
Person operator+(Person &p1, Person &p2){
    // 定义临时变量
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p2.m_B + p2.m_B;
    return temp;
}

int main() {
    // 创建对象，调用函数
    Person p1(10,10);
    Person p2(10,10);
    Person p3 = p1 + p2;
    // 输出结果
    cout << "p3的m_A=" << p3.m_A <<endl <<"p3的m_B="<< p3.m_B << endl;
    return 0;
}