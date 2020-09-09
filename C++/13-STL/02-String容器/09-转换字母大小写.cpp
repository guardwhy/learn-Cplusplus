#include <iostream>
#include <cstring>
using namespace std;
/*
string字符串中的所有小写字母都变为大写字母。
*/
int main()
{
    // 定义字符串
    string str = "guardWHY";
    // 遍历字符串
    for(int i=0; i < str.size(); i++){
        // 小写转大写
        str[i] = toupper(str[i]);
    }

    // 输出字符串
    cout << "输出大写字符串:"<< str << endl;   // 输出大写字符串:GUARDWHY

    // 遍历字符串
    for(int j=0; j < str.size(); j++){
        // 小写转大写
        str[j] = tolower(str[j]);
    }

    // 输出字符串
    cout << "输出小写字符串:"<< str << endl;   // 输出小写字符串:guardwhy

    return 0;
}
