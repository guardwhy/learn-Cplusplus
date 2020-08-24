#include <iostream>
/**
 * 默认参数
 */
using namespace std;
/**
 * 1、默认参数 ,可以给形参加默认值，如果传入值，就用用户传的实参，如果没有就用默认值
 * @param a
 * @param b
 * @param c
 * @return
 */

//如果某个位置已经有了默认参数，那么从这个位置起，后面的参数都必须有默认参数。
int function(int a, int b = 20, int c =20){
    return a + b + c;
}

// 声明函数
void test01(){
    // 定义变量
    int a = 10;
    int b = 100;
    // 输出结果
    cout << function(a,b) << endl;
}

// 函数的声明和实现,只能有一个有默认参数
int function2(int a = 10, int b =10);
int function2(int a, int b){
    return a + b;
}

void test02(){
    function2();
}

// 占位参数:在形参中，只写数据类型,起到占位的用途,调用的时候必须传入实参
int function3(int a, int = 10)
{

}

void test03()
{
    function3(10);
}

int main() {
    cout << "Hello, World!" << endl;
    // 调用函数
    // test01();
    // test02();

    test03();
    return 0;
}