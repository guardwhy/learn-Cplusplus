#include <iostream>
using namespace std;
/**
 * 调用规则
 * @return
*/
// 普通函数
void display(int a, int b){
    cout << "普通函数display函数调用"<< endl;
}

// 函数模板
template <class T>
void display(T a, T b){
    cout << "函数模板display调用"<< endl;
}
// 函数模板重载
template <class T>
void display(T a, T b,T c){
    // 输出结果
    cout << "函数模板display(a,b,c)调用" << endl;
}
int main() {
    //1、普通函数和函数模板都可以匹配,优先使用普通函数
    int a = 10;
    int b = 20;
    // 调用函数
    // display(a, b);

    // 2、想强制调用函数模板，需要加空模板参数列表
    display< >(a, b);

    // 3、函数模板可以发生函数重载
    display(a, b, 10);

    // 4、函数模板可以产生更好的匹配，那么优先使用函数模板.
    char c1 = 'A';
    char c2 = 'a';
    // 调用函数
    display(c1, c2);
    return 0;
}