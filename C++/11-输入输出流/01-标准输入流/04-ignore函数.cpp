#include <iostream>
using namespace std;
/**
 * cin.ignore():忽略
 * @return
 */
int main() {
    cout << "请输入字符串:" << endl;
    // //默认忽略1个缓冲区中的字符，可以填写忽略个数
    cin.ignore(2);
    char ch = cin.get();
    // 输出字符串
    cout <<"ch=" << ch << endl;
    return 0;
}