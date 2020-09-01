#include <iostream>
using namespace std;
/**
 * 纯虚函数:不需要有实现,有了纯虚函数的类，也称为抽象类.
 * 抽象类 无法实例化对象,子类必须重写父类纯虚函数，否则子类也是抽象类.
 * @return
*/
// 基类:Person
class Person{
   // 纯虚函数
   virtual void function() = 0;
};

// 派生类
class Student: public Person{
public:
    // 重写父类纯虚函数
    virtual void function(){};    //子类必须重写父类纯虚函数,否则无法实例化对象
};
int main() {
    // Person person; // 抽象类无法实例化
    Student stu;
    return 0;
}