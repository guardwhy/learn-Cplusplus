#include <iostream>
using namespace std;
/**
 * 引用的本质:c++内部实现是一个指针常量
 * @return
 */

// 声明函数
void functionTest(int &ref){
    ref = 100;
    cout << "ref的值:"<< ref << endl; // 100
}

int main() {
    // 定义变量
    int a = 10;
    int &aRef = a;
    aRef = 20;
    // 输出结果
    cout << "a的值:"<< a << endl; // 20
    cout << "aRef的值:"<< aRef << endl;   // 20
    // 调用函数
    functionTest(a);
    return 0;
}