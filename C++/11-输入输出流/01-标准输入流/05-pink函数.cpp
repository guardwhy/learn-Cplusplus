#include <iostream>
using namespace std;
/**
 * cin.pink 偷窥
 * @return
*/
int main() {
    cout << "请输入字符串:" << endl;
    //查看缓冲区中第一个字符，并不取走
    char ch = cin.peek();
    cout << "ch=" << ch << endl;
    // 取字符
    ch = cin.get();
    cout << "ch=" << ch << endl;
    ch = cin.get();
    cout << "ch=" << ch << endl;
    return 0;
}