#include <iostream>
#include <string>
using namespace std;
/**
 * string查找和替换
 * @return
 */
int main() {
    // 查找
    string str1 = "abcdefghde";
    // 查找字符位置
    int index = str1.find("de");
    // 条件判断
    if(index == -1){
        cout << "查找子串失败"<< endl;
    }else{
        cout <<"子串位置:"<< index << endl;     // 子串位置:3
    }

    // 替换子串
    string str2 = "guardwhy";
    // 替换操作
    str2.replace(1,3,"123");
    // 输出字符串结果
    cout << "字符串的值:"<< str2 << endl;    // 字符串的值:g123dwhy
    return 0;
}