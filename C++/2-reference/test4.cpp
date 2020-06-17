#include <iostream>
/**
 * 常量的引用
 */
using namespace std;

//加const修饰形参，为了防止在代码中误操作，修改数据
void constValue( const int &a){
    // 输出a的大小
    cout << "a的大小是:" << a << endl;
}

// 声明函数
void test01(){
    // 定义变量
    int a = 200;
    constValue(a);
}
int main() {
    cout << "Hello, World!" << endl;
    // 调用函数
    test01();
    return 0;
}