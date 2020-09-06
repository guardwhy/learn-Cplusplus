#include <iostream>
using namespace std;
/*
    静态转换:static_cast
*/
int main()
{
    // 定义变量
    char a = 'a';
    // 输出a的值
    cout << "a的值:"<< a << endl;   // a

    double b = static_cast<double>(a);
    // 输出b的值
    cout << "b的值:"<< b << endl;   // 97
    return 0;
}
