#include <iostream>
using namespace std;
/**
 * Const常量引用
 * @return
*/

void ConstFunction01(){
    // int &b = 10; // 非法定义
    // 定义常量引用变量
    const int &b = 10;  // int temp = 10; const int &b = temp;(编译代码)

    int *p = (int*)&b;
    *p = 30;
    // 输出b的值
    cout << "b的值:" << b << endl;
}

// 常量引用使用场景
void display(const int &a){
    // a = 20; // 错误
   // 加const修饰形参,为了防止在代码中误操作,修改数据
   cout << "a的值是:" << a << endl;
}

int main() {
    // 调用函数
    ConstFunction01();
    // 定义变量
    int a = 100;
    display(a);
    return 0;
}