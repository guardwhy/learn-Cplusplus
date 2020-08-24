#include <iostream>
/**
 * 参数传递方式
 */
using namespace std;

// 1.地址传递
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    Swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

// 2.引用传递
void Swap01(int &a ,int &b )
{
    int temp = a;
    a = b;
    b = temp;
}

void test02()
{
    int a = 10;
    int b = 20;
    Swap01(a, b);
    cout << "a = " << a << endl; // 20
    cout << "b = " << b << endl; // 10
}

// 3.当函数返回值是引用的时候,函数的调用可以作为左值存在
int& function(){
    // 定义静态变量
    static int a = 10;
    return a;
}

void test03(){
    int &ref = function();
    // 输出结果
    cout << "ref的值是:" << ref << endl;
    cout << "ref的值是:" << ref << endl;
    cout << "ref的值是:" << ref << endl;


    //当函数返回值是引用时候，那么函数的调用可以作为左值存在
    function() = 200;
    cout << "------------------" << endl;
    cout << "ref的值是:" << ref << endl;
}

int main() {
    cout << "Hello, World!" << endl;

    // 调用函数
    // test01();
    // test02();
    test03();
    return 0;
}