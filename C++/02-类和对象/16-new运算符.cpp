#include <iostream>
using namespace std;
/**
 * new运算符
 * @return
*/
// 创建Person类
class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(int a )
    {
        cout << "Person的有参构造函数调用" << endl;
    }

    Person(const Person & p)
    {
        cout << "Person的拷贝构造函数调用" << endl;
    }

    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }
};

/**
 * C和C++堆区开辟内存和释放内存区别
 * C语言: malloc free
 * C++语言: new delete
 * malloc返回的数据类型, void*
 * new 返回的数据类型, 创建对象的指针类型
 * @return
 */
void newFunction01(){
    // new运算符,也是在堆区开辟内存空间
    Person *p1 = new Person();
    Person *p2 = new Person(10);
    // 拷贝构造
    Person *p3 = new Person(*p2);
    // 释放对象
    delete p1;
    delete p2;
    delete p3;
}

/**
 * 不要用void *接受new出来的对象 ,原因无法释放该对象
 */
void newFunction02(){
    void *p = new Person;
    delete p;
}

/**
 * 利用new在堆区开辟数组
 * @return
*/
void newFunction03(){
    // 创建数组对象
    int* intArray = new int[10];

    // 自定义类型数据的数组(在堆开辟),必须有默认构造函数
    Person* personArray = new Person[3];
    // 释放空间
    delete[] personArray;
}

int main() {
    // 调用函数
    // newFunction01();
    // newFunction02();
    newFunction03();
    /*
        结果:
        Person的默认构造函数调用
        Person的默认构造函数调用
        Person的默认构造函数调用
        Person的析构函数调用
        Person的析构函数调用
    */
    return 0;
}