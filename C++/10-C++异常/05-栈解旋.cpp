#include <iostream>
using namespace std;
/**
 * 栈解旋:异常被抛出后，从进入try块起，到异常被抛掷前，这期间在栈上构造的所有对象，都会被自动析构。
 * 析构的顺序与构造的顺序相反，这一过程称为栈的解旋.
 * @return
*/
class Person{
public:
    // 成员变量
    string m_Name;
public:
    Person(string name){
        this->m_Name = name;
        cout << "Person构造函数调用"<< endl;
    }
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }
};

// 声明函数
void tryFunction(){
    // 创建对象
    Person person1("curry");
    Person person2("kobe");

    // 抛出异常
    throw 10;
}
int main() {
    // 调用函数
    try {
        tryFunction();
    } catch (...) {
        cout << "异常被捕获..." << endl;
    }
    return 0;
}