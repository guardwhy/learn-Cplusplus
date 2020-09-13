#include <iostream>
#include <string.h>
using namespace std;

//函数对象是重载了函数调用符号的类
class MyPrint{
public:
    // 定义计数器变量
    int m_Count = 0;
public:
    void operator()(string str){
        cout << "字符串是:"<< str << endl;
        m_Count++;
    }
};

int main(){
    // 函数对象
    MyPrint mp;
    mp("hello world");
    mp("hello world");
    mp("hello world");
    // 输出结果
    cout << "仿函数次数:"<< mp.m_Count << endl;     // 仿函数次数:3
    return 0;
}

