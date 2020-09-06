#include <iostream>
#include <cstring>
using namespace std;
/**
 * 运行异常
 * @return
 */
int main() {
    // 定义字符串变量
    string str = "kobe is mvp!!!";
    char ch1 = str[20]; // 下标越界
    // 输出结果
    cout << ch1 << endl;

    char ch2 = str.at(30);
    cout << "ch2的值:"<< ch2 << endl;   // 下标越界,抛出异常
    return 0;
}