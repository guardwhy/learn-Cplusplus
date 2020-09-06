#include <iostream>
#include <cstring>
using namespace std;
/**
 * 捕获异常
 * @return
 */
int main() {
    // 定义字符串变量
    string str = "kobe is mvp!!!";

    try {
        char ch1 = str[20];
        // 输出结果
        cout << ch1 << endl;
    } catch (exception e) {
        cout <<"捕获异常1" <<endl;
    }

    try{
        char ch2 = str.at(30);
        cout << "ch2的值:"<< ch2 << endl;
    } catch (exception &e) {
        cout <<"捕获异常2"<< endl;
    }
    return 0;
}