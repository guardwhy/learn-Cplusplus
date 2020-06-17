#include <iostream>
/**
 * 函数重载碰到函数默认参数，尽量避免这种情况出现，因为容易出现二义性
 */
using namespace std;
// 定义函数
void myFunction(int a, int b=100){
    cout << "myFunction(int a, int b)的调用" << endl;
}

void myFunction(int a){
    cout << "myFunction(int a )的调用" << endl;
}

// 声明函数
void test(){
    // myFunction(10); 二义性出现
}
int main() {
    cout << "Hello, World!" << endl;
    test();
    return 0;
}