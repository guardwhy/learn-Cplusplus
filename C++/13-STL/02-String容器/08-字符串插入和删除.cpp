#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
    string插入和删除操作
    string& insert(int pos, const char* s); //插入字符串
    string& insert(int pos, const string& str); //插入字符串
    string& insert(int pos, int n, char c);//在指定位置插入n个字符c
    string& erase(int pos, int n = npos);//删除从Pos开始的n个字符
    */
    // 定义字符串
    string str1 = "guardwhy";
    // 插入数据
    str1.insert(1, "123");
    // 输出字符串
    cout << "str1的值:"<< str1 << endl;     // str1的值:g123uardwhy

    // 删除操作
    str1.erase(1,3);
    cout << "str1的值:"<< str1 << endl; // tr1的值:guardwhy
    return 0;
}
