#include <iostream>
/**
 * 函数重载：C++下允许函数名称相同
 * 满足条件：
    1、在相同的作用域下。2、函数名称相同。3、参数的个数不同,或者类型不同 或者顺序不同
 */
using namespace std;

// 声明函数
void function()
{
    cout << "function()调用" << endl;
}

void function(int a)
{
    cout << "function(int a)调用" << endl;
}

void function(int a, double b)
{
    cout << "function(int a, double b)调用" << endl;
}

void test(){
    function(3.23, 10);
}

int main() {
    cout << "Hello, World!" << endl;
    // 调用函数
    test();
    return 0;
}