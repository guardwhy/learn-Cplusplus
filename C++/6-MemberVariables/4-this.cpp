#include <iostream>
/**
 * 常函数和常对象
 */
using namespace std;
class Person{
public:
    // 定义变量
    int m_Age;
    mutable int m_Height;
    // 构造函数
    Person(int age){
        this->m_Age = age;
    }

    // 常函数
    void showAge() const {
        // const修饰的是this指针，当成员函数后面写了const，这个函数称为常函数.
        this->m_Height = 170;
        cout << this->m_Age << endl;
        cout << this->m_Height << endl;
    }
};

// 调用函数
void test01(){
    // 创建对象
    Person p(10);
    p.showAge();
}

void test02(){
    // 常对象
    const Person p1(15);
    p1.showAge(); // 常对象可以调用常函数,常对象不能调用普通函数。
    p1.m_Height = 178;
}
int main() {
    test02();
    return 0;
}