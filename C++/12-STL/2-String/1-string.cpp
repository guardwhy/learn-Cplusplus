#include <iostream>
/**
 * 字符串的构造和基本赋值操作
 */
using namespace std;

int main() {
    /**
     * 构造函数
        string();//创建一个空的字符串 例如: string str;
        string(const string& str);//使用一个string对象初始化另一个string对象
        string(const char* s);//使用字符串s初始化
        string(int n, char c);//使用n个字符c初始化
     */
     string str1;
     string str2 = str1;
     string str3 = "abcde";
     string str4(5, 'a');

     // 输出结果
     cout << "str3=" << str3 << endl;
     cout << "str4=" << str4 << endl;

     /**
        赋值操作
        string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
        string& operator=(const string &s);//把字符串s赋给当前的字符串
        string& operator=(char c);//字符赋值给当前的字符串
        string& assign(const char *s);//把字符串s赋给当前的字符串
        string& assign(const char *s, int n);//把字符串s的前n个字符赋给当前的字符串
        string& assign(const string &s);//把字符串s赋给当前字符串
        string& assign(int n, char c);//用n个字符c赋给当前字符串
        string& assign(const string &s, int start, int n);//将s从start开始n个字符赋值给字符串
      */
      // 定义变量
      string str5;
      str5.assign("abcdefgyyiop",6);
      cout << "str5 =" << str5 << endl;  //abcdef

      string str6;
      str6.assign(str5, 1, 4);
      // 输出结果
      cout << "str6=" << str6 << endl; // bcde
    return 0;
}