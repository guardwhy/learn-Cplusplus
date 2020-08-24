#include <iostream>
/**
 * 静态成员函数
 */
using namespace std;

class Student{
    // 定义静态成员变量
    static int a;
    // 定义非静态成员变量
    int c;

public:
    // 普通函数,可以访问静态和非静态成员变量
    void func(){
        a = 100;
        c = 30;
        cout << "a的值是:"<< a << endl << "c的值是:"<< c << endl;
    }

    // 静态成员函数
    static void func1(){
        cout << "func1静态成员函数调用" << endl;
        a = 300;
        cout << "a的值是:"<< a << endl;
    }
};

// 初始化静态成员变量
int Student::a = 400;


//静态成员函数
void test(){
    // 访问方式: 通过对象
    Student stu;
    stu.func1();

    // 访问方式:通过类名访问
    Student::func1();
}
int main() {
    // 调用函数
    test();
    return 0;
}