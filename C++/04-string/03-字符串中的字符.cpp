#include <iostream>
using namespace std;
/**
 * 字符串中的字符
 * @return
 */
int main() {
    // 定义字符串变量
    string s = "guardwhy is mvp";
    // 遍历字符串
    cout << "字符串:" <<"";
    for(int i=0,len=s.length(); i<len; i++){
        // 输出结果
        cout << s[i];
    }
    cout << endl;
    // 赋值操作
    s[5] = '5';
    cout <<"字符串:"<< s << endl;

    return 0;
}