#include <iostream>
using namespace std;
/**
 * 继承中的构造和析构
 * @return
*/
// 基类:Person
class Person{
public:
    // 无参构造
    Person(){
        cout << "Person默认构造函数的调用" << endl;
    }
    // 析构函数
    ~Person(){
        cout << "Person析构函数调用" << endl;
    }
};

// 普通类
class OtherStudent{
public:
    // 构造函数
    OtherStudent(){
        cout << "OtherStudent默认构造函数调用" << endl;
    }

    // 析构函数
    ~OtherStudent(){
        cout << "OtherStudent析构函数的调用"<< endl;
    }
};

// 派生类
class Student: public Person{
public:
    // 创建对象
    OtherStudent otherStudent;
    // 构造函数
    Student(){
        cout << "student默认构造函数调用"<< endl;
    }
    // 析构函数
    ~Student(){
        cout << "student析构函数的调用" << endl;
    }
};
int main() {
    // 创建对象
    Student st;
    /**
    运行结果:
        Person默认构造函数的调用
        OtherStudent默认构造函数调用
        student默认构造函数调用
        student析构函数的调用
        OtherStudent析构函数的调用
        Person析构函数调用
     */
    // 当创建子类对象时候，先调用父类构造函数，再调用其他类对象构造，再调用自身构造，析构的顺序与构造相反
    return 0;
}