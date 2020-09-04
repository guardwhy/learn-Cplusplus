#include <iostream>
using namespace std;
/**
 * 函数模板
 * @return
*/
// 函数模板
template <typename T>
// 声明函数
void mySwap(T &a, T &b){
    // 交换变量
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // 1.自动类型推导
    int a = 10;
    int b = 20;
    cout << "a的值:"<< a << " ,b的值:"<< b<< endl;
    // 调用函数
    mySwap(a, b);
    cout << "a的值:"<< a << " ,b的值:"<< b<< endl;

    // 2.显示指定类型
    double d1 = 1.1;
    double d2 = 2.2;
    cout << "d1的值:"<< d1 << " ,d2的值:"<< d2<< endl;
    // 调用函数
    mySwap<double>(d1, d2);
    cout << "d1的值:"<< d1 << " ,d2的值:"<< d2 << endl;
    return 0;
}