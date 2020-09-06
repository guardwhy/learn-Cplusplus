#include <iostream>
#include <string.h>
using namespace std;
/*
输出单个字符:cout.put();
*/
int main()
{
    // 定义字符串
    string str = "kobe is mvp";
    // 遍历循环
    for (int i = str.length() - 1; i>= 0; i--)
    {
        // 从最后一个字符开始输出
        cout.put(str[i]);
    }
    cout.put('\n');
    
    return 0;
}
