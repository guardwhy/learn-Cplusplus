#include <iostream>
/**
 * 构造函数的分类：
 *  分类方式1: 参数 无参构造(默认构造) 有参构造
 *  分类方式2: 类型 拷贝构造 普通构造
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

// 构造函数的调用
void test01(){
    // 默认构造函数的调用
    Student stu;

}

/**
 * 调用方法
 * @return
 */

void test02(){
    /**
     * 括号法
     */

     /*
     Student stu(10); // 有参构造
     stu.age = 16;

     // 调用拷贝构造函数
     Student stu1(stu);
     cout << "stu1的年龄是:"<< stu1.age << endl;
      */

    // 注意:不要利用括号法,调用默认构造函数 Student stu(); 将代码看成函数的声明而不是认为是在创建对象。

    /**
     * 显示法
     */

     /*
     Student stu3 = Student(10); // 有参构造调用
     Student stu4 = Student(stu3); // 显示法调用拷贝构造函数
     */

     // 匿名对象
     // Student(10); // 单独写Student(10),被称为匿名对象,特点:当本行执行完毕,立即释放。
     // 不要利用拷贝构造函数,初始化匿名对象。

     // 隐式转换法 可读性低
     Student stu5 = 10; // 编译器隐式将代码转换为 Student stu = Student(10);
     // 利用隐式转换法,调用拷贝构造函数
     Student stu6 = stu5; // 隐式转为student stu6 = Student(stu5);

}
int main() {
    cout << "Hello, World!" << endl;
    // 调用函数
    // test01();

    test02();
    return 0;
}