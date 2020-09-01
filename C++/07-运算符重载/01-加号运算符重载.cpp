#include <iostream>
using namespace std;
/**
 * 加号运算符重载
 * @return
*/
// 基类:Person
class Person{
public:
    // 成员变量
    int m_A;
    int m_B;
    // 构造函数
    Person(){}
    // 代参构造初始化
    Person(int a, int b):m_A(a), m_B(b){}
    // 成员函数调用
    Person operator+(Person & p){
        // 定义临时temp
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }

};

//通过全局函数实现加号运算符重载
Person operator+(Person &pst1, Person &pst2){
    // 临时变量
    Person temp;
    temp.m_A = pst1.m_A + pst2.m_A;
    temp.m_B = pst1.m_B + pst2.m_B;
    return temp;
}

//通过全局函数实现加号运算符重载
Person operator+(Person &pst1, int num){
    // 临时变量
    Person temp;
    temp.m_A = pst1.m_A + num;
    temp.m_B = pst1.m_B + num;
    return temp;
}
void testFunction01(){
    // 创建对象
    Person p1(10, 10);
    Person p2(10, 10);
    // 成员函数本质调用
    Person p3 = p1.operator+(p2);

    // Person p3 = p1 + p2;
    // 输出结果
    cout << "P3的m_A的值:" << p3.m_A << ", p3的m_B的值:" << p3.m_B << endl;
}

// 定义全局函数
void testFunction02(){
    // 创建对象
    Person pst1(10, 10);
    Person pst2(10, 10);
    // 全局函数本质调用
    Person pst3 = operator+(pst1,pst2);

    // Person pst3 = pst1 + pst2;
    // 输出结果
    cout << "Pst3的m_A的值:" << pst3.m_A << ", pst3的m_B的值:" << pst3.m_B << endl;
}

// 定义函数重载
void testFunction03(){
    // 创建对象
    Person pst1(10, 10);
    Person pst2(10, 10);

    // 运算符重载.
    Person p4 = pst1 + 100;

    // 输出结果
    cout << "P4的m_A的值:" << p4.m_A << ", p4的m_B的值:" << p4.m_B << endl;
}
int main() {
    // 调用函数,成员函数
    testFunction01();
    // 调用函数,全局函数
    testFunction02();
    // 函数重载
    testFunction03();
    return 0;
}