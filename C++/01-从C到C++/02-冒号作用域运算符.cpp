#include <iostream>
/**
 * 双冒号作用域运算符。
 */
using namespace std;
// 定义全局变量
int a = 100;

// 声明函数
void test01()
{
    // 定义局部变量
    int a = 200;
    cout << "局部变量:" << a << endl;
    // 如果::前面没有任何内容,表示代表全局作用域。
    cout << "全局变量:" << ::a << endl;
}

int main() {
    // 调用函数
    test01();
    return 0;
}