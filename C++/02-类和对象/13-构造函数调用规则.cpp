#include <iostream>
#include <string.h>
using namespace std;
/**
 * 构造函数调用机制
 * @return
*/

// 创建Person类
class Person{
public:
    // 定义成员属性
    int age;
    string name;

    Person(){
        cout << "默认构造函数调用" << endl;
    }

    Person(int a){
        cout << "代参构造函数调用" << endl;
    }

    // 拷贝构造:值传递的本质就是调用拷贝构造函数
    Person(const Person &p){
        cout << "拷贝构造函数调用" << endl;
        age = p.age;
        name = p.name;
    }

    ~Person(){
        cout << "析构函数的调用" << endl;

    }

};

int main() {
    // 创建对象
    Person pst;
    // 赋值操作
    pst.name = "curry";
    pst.age = 10;

    // 隐式转换法
    Person pst2 = pst;
    // 输出属性
    cout << "姓名是:"<< pst2.name<< ",年龄是:"<< pst2.age << endl;
    return 0;
}