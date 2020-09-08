#include <iostream>
#include <string>
using namespace std;
/*
string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串
*/
int main()
{
    // 定义字符串
    string str = "abcdefg";
    string subS = str.substr(0, 4);
    // 输出子串
    cout << "返回字符子串:"<< subS << endl; // abcd

    // 定义邮件字符串
    string email = "hxy1625309592@aliyun.com";
    // 查找子串位置
    int index = email.find("@");
    string userName = email.substr(0, index);
    // 用户名
    cout << "用户名:"<< userName << endl;
    return 0;
}
