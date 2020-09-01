#include <iostream>
#include <cstring>
using namespace std;
/**
 * 函数调用运算符
 * @return
*/
// 基类:MyPrint
class MyPrint{
public:
    // 重载()运算符
    void operator()(string text){
        // 输出结果
        cout << "文档是:"<< text << endl;
    }
};
void myPrint(string text){
    cout <<"重载函数:"<< text << endl;
}

// 基类:MyAdd
class MyAdd{
public:
    int operator()(int a, int b){
        return a + b;
    }
};

int main() {
    // 创建对象
    MyPrint pst;
    pst("guardwhy");
    // 调用函数
    myPrint("guardwhy");

    // 匿名函数
    cout << "MyAdd函数调用:"<< MyAdd()(10,20) << endl;
    return 0;
}