#include <iostream>
using namespace std;
/**
 * 拷贝构造函数调用时机
 * @return
*/
// 创建Person类
class Person{

public:
    // 定义变量
    int age;

    Person(){
        cout << "默认构造函数调用" << endl;
    }

    Person(int a){
        cout << "代参构造函数调用" << endl;
    }

    // 拷贝构造:值传递的本质就是调用拷贝构造函数
    Person(const Person &p){
        cout << "拷贝构造函数调用" << endl;
        age = p.age;
    }

    ~Person(){
        cout << "析构函数的调用" << endl;

    }

};

// 1.用已经创建好的对象,初始化新的对象
void copyContructor01(){
    // 创建对象
    Person p1;
    p1.age = 21;
    // 拷贝构造函数的调用
    Person p2(p1);
    // 输出年龄
    cout << "p2的年龄为:"<< p2.age << endl;
}

// 2.值传递的方式,给函数参数传值
void display(Person p){
    cout<< "age的值是:" << p.age << endl;
}

void copyContructor02(){
    // 创建对象
    Person p;
    p.age = 19;
    display(p);
}

// 以值的方式返回局部对象
Person display(){
    // 创建对象
    Person p;
    return p;
}

void copyContructor03(){
    Person p = display();
    p.age = 17;
    cout<< "age的值是:" << p.age << endl;
}

int main() {
    // 调用函数
    // copyContructor01();
    // copyContructor02();
    copyContructor03();
    return 0;
}