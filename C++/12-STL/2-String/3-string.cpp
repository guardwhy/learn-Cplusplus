#include <iostream>
/**
 * 字符串拼接和查找替换
 */
using namespace std;

int main() {
    /**
     拼接
    string& operator+=(const string& str);//重载+=操作符
    string& operator+=(const char* str);//重载+=操作符
    string& operator+=(const char c);//重载+=操作符
    string& append(const char *s);//把字符串s连接到当前字符串结尾
    string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
    string& append(const string &s);//同operator+=()
    string& append(const string &s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
    string& append(int n, char c);//在当前字符串结尾添加n个字符c
     */

    string s1 = "curry";
    s1 += "是mvp.";
    // 输出结果
    cout << s1 << endl;

    s1.append(",爱NBA");
    cout << s1 << endl;

    /**
     * string查找和替换
    int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
    int find(const char* s, int pos = 0) const;  //查找s第一次出现位置,从pos开始查找
    int find(const char* s, int pos, int n) const;  //从pos位置查找s的前n个字符第一次位置
    int find(const char c, int pos = 0) const;  //查找字符c第一次出现位置
    int rfind(const string& str, int pos = npos) const;//查找str最后一次位置,从pos开始查找
    int rfind(const char* s, int pos = npos) const;//查找s最后一次出现位置,从pos开始查找
    int rfind(const char* s, int pos, int n) const;//从pos查找s的前n个字符最后一次位置
    int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
    string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
    string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
     */

    // 查找和替换
    string str1 = "abcdefghde";
    // 从起始位开始查找位置,默认是0
    int pos = str1.find("de");
    /**
     * find从左往后查,rfind从右往左查
     */
    if(pos == -1){
        cout << "未找到字串" << endl;
    }else{
        cout << "找到字串,位置是:" << pos << endl;
    }

    // 替换
    string str2 = "abcderfg";
    // string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str.
    str2.replace(1,3,"11111");
    cout << str2 << endl;
    return 0;
}