#include <iostream>
using namespace std;
/**
 * 静态成员:
 * 特点: 所有对象都共享同一份静态成员.
 *      在编译阶段就分配了内存.
 *      必须在类内声明、类外初始化
 * @return
*/

// 创建Student类
class Student{
public:
    // 定义静态成员变量(声明)
    static int m_A;
    // 无参构造
    Student(){
        //m_A = 100; // 静态成员在编译阶段就分配了内存,构造函数要创建对象才分配内存。
    }
private:
    static int m_B; // 私有化静态成员变量
};

// 类外初始化
int Student::m_A = 10;
int Student::m_B = 20;

/**
 * 静态成员
 * @return
*/
void staticFunction01(){
    // 创建学生对象
    Student stu;
    // 输出结果
    cout << "学生人数:" << stu.m_A << endl; // 10
    // 创建stu2对象
    Student stu2;
    stu.m_A = 200;
    // 输出结果
    cout<< "学生人数:" << stu2.m_A << endl; // 2000
}
/**
 * 静态成员访问方式
 * @return
 */
void staticFunction02(){
    // 通过对象对象访问
    Student stu;
    cout << "学生人数:"<< stu.m_A <<endl;

    // 通过类名访问
    cout << "学生人数:" << Student::m_A << endl;
}

/**
 * 静态成员变量访问权限
 * @return
*/
void staticFunction03(){
    // 创建对象
    Student s1;
    
    cout << "学生人数:"<< s1.m_A << endl;   // 公共权限的静态成员变量在类外可以访问。

    // cout << "学生人数:"<< s1.m_B << endl; // 私有权限的静态成员变量在类外不可以访问。
}

int main() {
    // 调用函数
    // staticFunction01();
    // staticFunction02();
    staticFunction03();

    return 0;
}