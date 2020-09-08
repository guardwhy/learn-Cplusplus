#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
遍历字符串
*/
int main()
{
    // 定义字符串
    string str = "www.guardwhy.cn";
    // 定义容器
    vector<string> v;
    // 末尾值
    int pos = -1;
    int start = 0;
    // 条件判断
    while (true)
    {
        // 末尾值
        pos = str.find(".", start);
        if(pos == -1){
            // 返回字符子串
            string subS = str.substr(start, str.size()-start);
            // 插入数据
            v.push_back(subS);
            break;
        }
        string subS = str.substr(start, pos-start);
        v.push_back(subS);
        // 添加值
        start = pos + 1;
    }

    // 遍历字符串
    for(vector<string>::iterator it = v.begin(); it!= v.end(); it++){
        cout << *it << endl;
    }
    
    return 0;
}
