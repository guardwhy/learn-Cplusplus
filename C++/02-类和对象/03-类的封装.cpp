#include <iostream>
/**
 * 类的封装
 */
using namespace std;

// 创建类Person
class Person{
public: // 公共权限
    string name; // 姓名
protected: // 保护权限
    string car;
private: // 私有权限
    int password;

public:
    void function(){
        /**
         * 所有权限类内都可以访问
         */
         name = "curry";
         car = "小学生跑车";
         password = 123446;
    }
};

// 声明函数
void test(){
    // 创建对象
    Person p;
    p.name = "kobe";
    // p.car = "法拉第";  保护权限,在类外不可以访问
    // p.password = 134566; 私有权限，在类外不可以访问
}

int main() {
    cout << "Hello, World!" << endl;
    // 调用函数
    test();
    return 0;
}