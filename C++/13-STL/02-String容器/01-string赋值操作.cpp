#include <iostream>
#include <string>
using namespace std;
/**
 * string基本赋值操作
 * @return
*/
int main() {
    /**
     *构造函数
     *string();//创建一个空的字符串 例如: string str;
     *string(const string& str);//使用一个string对象初始化另一个string对象
     *string(const char* s);//使用字符串s初始化
     *string(int n, char c);//使用n个字符c初始化
     *@return
     */
    string str1;
    string str2 = str1;
    string str3 = "guardwhy";
    string str4(5, 'a');
    // 输出字符串
    cout << "str3的值:"<< str3 << endl;   // str3的值:guardwhy
    cout << "str4的值:"<< str4 << endl;   // str4的值:aaaaa

    /**
     *赋值操作
     * string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
     * string& operator=(const string &s);//把字符串s赋给当前的字符串
     * string& operator=(char c);//字符赋值给当前的字符串
     * string& assign(const char *s);//把字符串s赋给当前的字符串
     * string& assign(const char *s, int n);//把字符串s的前n个字符赋给当前的字符串
     * string& assign(const string &s);//把字符串s赋给当前字符串
     * string& assign(int n, char c);//用n个字符c赋给当前字符串
     * string& assign(const string &s, int start, int n);//将s从start开始n个字符赋值给字符串
     *@return
    */
    string str5;
    str5.assign("guardwhy", 6);
    // 输出字符串
    cout << "str5字符串:" << str5 << endl; // str5字符串:guardw

    string str6;
    str6.assign(str5, 1, 4);
    cout << "str6字符串:" << str6 << endl; // str6字符串:uard
    return 0;
}