#include <iostream>
/**
 * 函数重载:引用的两个版本，参数加const和不加const的区别
 */
using namespace std;

// 声明函数
void myFunction(int & a){
    cout << "myFunction(int &a)的调用" << endl;
}

void myFunction(const int & a){
    cout << "myFunction(const int &a)的调用"<< endl;
}

void test(){
    // myFunction(10);  // myFunction(const int &a)的调用

    int a = 10;
    myFunction(a); // myFunction(int &a)的调用
}

int main() {
    cout << "Hello, World!" << endl;
    // 调用函数
    test();
    return 0;
}