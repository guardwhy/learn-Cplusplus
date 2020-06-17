#include <iostream>
/**
 * this指针
 */
using namespace std;
// 定义Student
class Student{
public:
    // 定义变量
    int age;

    // 构造方法
    Student(int age){
        this->age = age;
    }

    // 添加方法
    Student& studentAddage(Student & stu){
        // 添加年龄
        this->age += stu.age;
        return *this; // *this指向stu2本体, this指向stu2的指针。
    }
};
int main() {
    // 创建stu对象
    Student stu(15);
    cout << "小米的年龄是:" << stu.age << endl;

    // 创建stu2对象
    Student stu2(10);
    stu2.studentAddage(stu);
    cout << "小明的年龄是:" << stu2.age << endl;
    return 0;
}