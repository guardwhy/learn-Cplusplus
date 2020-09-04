#include <iostream>
using namespace std;
/**
 * 普通函数和函数模板的区别
 * @return
*/
// 模板函数:addFunction
template <class T>
T addFunction01(T a, T b){
    return a + b;
}

// 普通函数
int addFunction02(int a, int b){
    return a + b;
}
int main() {
    // 普通函数可以发生隐式类型转换
    int a = 10;
    int b = 30;
    char c = 'c';

    // addFunction01(a, c); // 函数模板:用自动类型推导的时候,不会发生隐式类型转换.
    // 输出结果
    cout <<"输出a加c的和:"<< addFunction01<int>(a, c) << endl;   // 109
    cout <<"输出a加c的和:"<< addFunction02(a, c) << endl;    // 109
    return 0;
}