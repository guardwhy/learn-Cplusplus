#include <iostream>
using namespace std;
/*
cin.get()：一次只能读取一个字符
*/
int main()
{
    cout << "请输入字符串:"<<endl;
    char ch = cin.get();
    // 输出字符
    cout << "ch字符串:" << ch << endl;
    ch = cin.get();
    // 输出字符
    cout << "ch字符串:" << ch << endl;
     ch = cin.get();
    // 输出字符
    cout << "ch字符串:" << ch << endl;
    // 输出字符
    ch = cin.get();
	cout << "ch = " << ch << endl;
    return 0;
}
