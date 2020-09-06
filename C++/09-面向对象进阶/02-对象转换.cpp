#include <iostream>
using namespace std;
/**
 * 对象转换
 * @return
*/
// 基类:person
class Person{};
// 派生类:Student
class Student: public Person{};

int main() {
    // 创建对象
    Person *person = NULL;
    // 父转子，向下转型。不安全
    Student * student = static_cast<Student*>(person);
    // 子转父,向上转型 安全
    Person *person1 = static_cast<Person*>(student);
    return 0;
}