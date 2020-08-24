#include <iostream>
/**
 * 构造函数和析构函数
 */
using namespace std;

class Person{
public:

    // 构造函数和析构函数必须要写到公共权限下面
    Person(){
        cout << "Person的构造函数调用" << endl;
    }
    // 析构函数
    ~Person(){
        cout << "Person的析构函数调用" << endl;
    }
};

void test01(){
    // 创建对象
    Person p;

    /*
    构造函数由编译器自动调用一次，无须手动调用
    如果我们不提供构造函数，编译器也会自动提供构造函数,默认空实现.
    */

    // 析构函数 也是编译器自动调用一次
    // 如果我们不提供析构函数，编译器会提供空实现析构函数
    // 析构函数 在对象被销毁前 自动调用
}
int main() {
    cout << "Hello, World!" << endl;

    // 调用函数
    test01();
    return 0;
}