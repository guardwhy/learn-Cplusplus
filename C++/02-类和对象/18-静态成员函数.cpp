#include <iostream>
using namespace std;
/**
 * 静态成员函数
 * @return
*/

// 创建Student类
class Student{
public:
    int m_C; // 定义普通变量
    static int m_A; //定义静态成员变量(声明)

    // 静态成员函数
    static void function01(){
        cout << "function静态成员函数调用"<< endl;
        m_A = 1000;  // 静态变量可以修改
        // m_C = 100;   // 非静态变量无法修改
    }
    // 非静态成员函数
    void function02(){
        m_C = 100;
        m_A = 100;
    }
private:
    static int m_B; // 私有化静态成员变量
    // 私有静态成员函数
    static void function03(){
        cout << "私有静态成员函数调用" << endl;
    }
};

// 类外初始化
int Student::m_A = 10;
int Student::m_B = 20;

/**
 * 静态成员函数
 * @return
*/
void staticFunction01(){
    // 创建对象,通过对象
    Student s1;
    s1.function01();

    // 类名访问
    Student::function01();
}

int main() {
    staticFunction01();
    return 0;
}