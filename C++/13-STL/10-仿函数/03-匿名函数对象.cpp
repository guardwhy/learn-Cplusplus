#include <iostream>
#include <string.h>
using namespace std;
/**
 * 匿名函数对象
 * @return
*/
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

void display(MyPrint mp, string str){
    // 输出字符串
    mp(str);
}

int main(){
    // 调用函数
    MyPrint mp;
    display(MyPrint(), "curry");
}

