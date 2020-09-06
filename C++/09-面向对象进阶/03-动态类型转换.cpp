#include <iostream>
using namespace std;
/*
    dynamic_cast：动态类型转换
*/
// 基类:Person
class Person{
    // 虚函数
    virtual void function(){};
};

// 派生类: Student
class Student: public Person{
    // 重写父类的虚函数
    virtual void function(){};
};
// 声明函数
void dynamic_cast01(){
    // 1.创建person指针类型
    // Person *person = NULL;
    // 父转子,不安全
    // Student *student = dynamic_cast<Student*>(Person);

    // 2.创建student指针类型
    //Student * student = NULL;
    // 子转父，安全
    // Person * person1 = dynamic_cast<Person*>(student);

    // 多态转换
    Person* person = new Student;
    Student* student = dynamic_cast<Student*>(person);

}

int main()
{
    char a = 'a';
    // double b = dynamic_cast<double>(a); 不允许内置数据类型转换

    // 调用函数
    dynamic_cast01();

    return 0;
}
