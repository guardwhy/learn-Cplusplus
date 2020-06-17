#include <iostream>
/**
 * 拷贝构造函数的调用时机
 */
using namespace std;

// 创建学生类
class Student{
public:
    // 定义变量
    int age;

    Student(){
        cout << "Student的默认构造函数调用" << endl;
    }

    Student(int a){
        cout << "Student的有参构造函数调用" << endl;
    }

    // 拷贝构造,值传递的本质就是调用拷贝构造函数
    Student(const Student &stu){
        cout << "Student的拷贝构造函数调用" << endl;
        age = stu.age;
    }

    ~Student(){
        cout << "Student的析构函数调用" << endl;
    }
};

// 1.用已经创建好的对象初始化新的对象
void test01(){
    Student stu;
    stu.age = 19;

    // 拷贝构造函数调用
    Student stu2(stu);
    cout << "stu2的年龄是:" << stu2.age << endl;
}

// 2.值传递的方式 给函数参数传值
void doStudy(Student stu){}

void test02(){
    // 创建对象
    Student stu;
    doStudy(stu);
}

// 3、以值的方式返回局部变量
Student doStudy2(){
    Student stu;
    return stu;
}

void test03(){
    Student stu = doStudy2();
}

int main() {
    cout << "Hello, World!" << endl;
    // 调用函数
    // test01();

    test02();
    return 0;
}