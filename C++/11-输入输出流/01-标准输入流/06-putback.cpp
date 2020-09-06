#include <iostream>
using namespace std;
/*
cin.putback() 放回
*/
int main()
{
    cout << "请输入字符串:" << endl;
    char ch = cin.get();
    // 将ch放回到缓冲区中,并且放回原位
    cin.putback(ch);
    // 字符
    char buf[1024] = {0};
    // 获得字符串
    cin.getline(buf, sizeof(buf));
    // 输出字符数组
    cout << "buf=" << buf << endl;
    return 0;
}
