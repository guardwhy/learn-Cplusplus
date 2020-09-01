#include <iostream>
using namespace std;
/**
 * this指针
 * @return
*/

// 创建Person类
class Person{
public:
    // 成员变量
    int age;
    //构造方法
    Person(int age){
        //每一个非静态成员函数内部都隐藏加了一个this指针
        this->age = age;
    }

    Person& personAddAge(Person & p){
        // 年龄添加
        this->age += p.age;
        return *this;
    }
};
int main() {
    // 创建对象
    Person pst(10);
    // 输出年龄
    cout << "pst的年龄是:"<< pst.age << endl;
    // 创建pst2对象
    Person pst2(10);
    pst2.personAddAge(pst).personAddAge(pst).personAddAge(pst);
    // 输出结果
    cout << "pst2的年龄:"<< pst2.age << endl;
    return 0;
}