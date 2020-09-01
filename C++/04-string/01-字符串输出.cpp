#include <iostream>
using namespace std;
/**
 * 字符串输出
 * @return
 */
int main() {
    // 定义字符串变量
    string s1;
    string s2 = "Curry is mvp!!!";
    string s3 = s2;
    cout << "字符串:" << s3 << endl;
    // 赋值操作
    int length = s3.length();
    // 输出结果字符串长度
    cout <<"字符串长度:" << length << endl;
    return 0;
}