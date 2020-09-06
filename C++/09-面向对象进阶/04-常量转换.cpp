#include <iostream>
using namespace std;
/**
 * const_cast常量转换
 * @return
 */
int main() {
    // 定义指针类型
    const int *p = NULL;
    // 将p指针转换为int *
    int * p1 = const_cast<int *>(p);
    const int * p2 = const_cast<const int*>(p1);

    // 引用
    int a = 10;
    int &b = a;
    const int & c = const_cast<const int &>(b);
    int & d = const_cast<int&>(c);

    // 注意:不可以对非指针或引用进行转换
    const int num = 10;
    // 转换
    // int num2 = const_cast<int>(num); // 错误
    return 0;
}