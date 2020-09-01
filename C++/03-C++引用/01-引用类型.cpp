#include <iostream>
using namespace std;
/**
 * 引用数据类型:给变量起别名
 * @return
 */
// 声明函数
void reference01(){
    // 定义变量
    int a = 10;
    int &b = a;
    // 输出变量
    cout << "a的值:"<< a << endl << "b的值:"<< b << endl;
    cout << "a的地址值:" << &a << endl <<"b的地址值:"<< &b << endl;
    cout << "-------------"<< endl;
    // 定义变量
    int c = 23;
    int &r = c;
    r = 33;
    // 输出变量值
    cout << "c的值:"<< c << endl << "r的值:"<< r << endl;
}

// 注意事项
void reference02(){
    // 1.引用必须初始化
    int a = 88;
    int &b = a;
    cout << "a的值:"<< a << ", b的值:"<< b << endl;

    // 引用一旦初始化,不能引向别的位置
    int c = 56;
    // &b = c; // 错误
    b = c ; // 赋值操作
}

int main() {
    // 调用函数
    reference01();
    cout << "*****************"<< endl;
    reference02();
    return 0;
}