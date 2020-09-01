#include <iostream>
using namespace std;
/**
 * 引用作为函数返回值
 * @return
 */
int &Function(int &r){
    r += 10;
    return r;
}

int main() {
    // 定义变量
    int a = 10;
    int b = Function(a);

    // 输出结果
    cout << "a的值:"<< a <<endl << "b的值:"<< b << endl;
    return 0;
}
