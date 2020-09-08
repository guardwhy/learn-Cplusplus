#include <iostream>
#include <string>
using namespace std;
/**
 * 字符串比较内容
 * @return
*/
int main() {
    /*
    string比较操作:
    compare函数在>时返回 1，<时返回 -1，==时返回 0。
    比较区分大小写，比较时参考字典顺序，排越前面的越小。大写的A比小写的a小。
    int compare(const string &s) const;//与字符串s比较
    int compare(const char *s) const;//与字符串s比较
    */

    // 定义字符串
    string str1 = "abcde";
    string str2 = "abcdefgh";
    // 比较结果
    int result = str1.compare(str2);
    // 条件判断
    if(result == 0){
        cout << "st1 == st2" << endl;
    }else if(result == 1){
        cout << "str1 > str2" << endl;
    }else{
        cout << "str1 < str2" << endl;
    }
    return 0;
}