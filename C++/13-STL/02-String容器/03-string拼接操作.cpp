#include <iostream>
#include <string>
using namespace std;
/**
 * string拼接操作
 * @return
 */
int main()
{
    /*
    string& operator+=(const string& str);//重载+=操作符
    string& operator+=(const char* str);//重载+=操作符
    string& operator+=(const char c);//重载+=操作符
    string& append(const char *s);//把字符串s连接到当前字符串结尾
    string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
    string& append(const string &s);//同operator+=()
    string& append(const string &s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
    string& append(int n, char c);//在当前字符串结尾添加n个字符c
    */
    // 定义字符串变量
    string s1 = "guardwhy";
    s1 += "is";
    // 输出字符串结果
    cout <<"字符串的值:"<<s1 << endl;

    // 拼接字符串
    s1.append("mvp!!!");
    cout <<"字符串的值:"<<s1 << endl;
    return 0;
}
