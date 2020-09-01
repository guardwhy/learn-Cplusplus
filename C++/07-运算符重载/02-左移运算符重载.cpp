#include <iostream>
using namespace std;
/**
 *左移运算符重载
 * @return
*/
// 基类:Person
class Person{
    friend ostream &operator << (ostream & out, Person &pst);
private:
    // 成员变量
    int num1;
    int num2;
public:
    // 构造函数
    Person(int a, int b){
        this->num1 = a;
        this->num2 = b;
    }
};

// 全局函数重载<< 运算符
ostream &operator << (ostream & out, Person &pst){
    cout << "num1=" << pst.num1 << ", num2=" << pst.num2;
    return out;
}

// 声明函数
void Leftoperator01(){
    // 创建对象
    Person pst(10, 20);
    // 输出结果
    cout << "输出对象:"<< pst << endl;
}
int main() {
    // 调用函数
    Leftoperator01();
    return 0;
}