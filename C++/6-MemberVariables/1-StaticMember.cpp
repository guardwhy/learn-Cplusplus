#include <iostream>
/**
 * 静态成员变量
    1、所有对象都共享同一份静态成员。
    2、在编译阶段就分配了内存。
    3、必须在类内声明、类外初始化。
 */
using namespace std;

// 创建Person类
class Person{
public:
    // 定义静态变量
    static int a;

private:
    static int b; // 私有静态成员变量
};

// 静态成员变量类外初始化
int Person::a = 100;
int Person::b = 200;

//1.静态变量基本语法
void test01(){
    // 创建对象p
    Person p;
    cout << "a的值是:" << p.a << endl;

    // 创建对象pe
    Person pe;
    p.a = 200;
    cout << "a的值是:" << pe.a << endl;
}

// 2.静态成员变量访问方式
void test02(){
    // 2.1 通过对象访问
    Person p;
    cout << "a的值是:"<< p.a << endl;
    // 2.2 通过类名访问
    cout << "a的值是:" << Person::a << endl;
}

void test03(){
    // 创建对象
    Person p1;
    // 输出结果
    cout << "静态变量a的值是:" << p1.a << endl;
    // 私有权限的b在类外不可以被访问.
    // cout << "私有静态变量b的值:" << p1.b << endl;
}

int main() {
    // 调用函数
    // test01();
    // test02();
    test03();
    return 0;
}