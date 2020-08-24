#include <iostream>
using namespace std;

// 定义宏函数
#define FUNC(a, b) ((a) < (b) ? (a) : (b))

// 调用内联函数
inline int function(int a, int b)
{
    return a < b ? a : b;
}

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 3;
    // 调用宏函数
    //int c = FUNC(++a, b);

    // 调用函数
    int c = function(++a, b);
    // 输出 a b c的值
    cout << "a:"<< a << endl << "b:"<< b << endl << "c:" << c << endl;
    /*
        a:2
        b:3
        c:2
    */

    return 0;
}
