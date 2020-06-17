#include <iostream>
#include <vector>
/**
 * string比较操作
 */
using namespace std;

/**
compare函数在>时返回 1，<时返回 -1，==时返回 0。
比较区分大小写，比较时参考字典顺序，排越前面的越小。大写的A比小写的a小。
int compare(const string &s) const;
int compare(const char *s) const;
 */
void test01(){
    // 定义字符串
    string str1 = "abcde";
    string str2 = "abcdefgh";

    // 比较操作
    int ret = str1.compare(str2);
    // 条件判断
    if(ret == 0){
        cout << "str1 == str2" << endl;
    }else if(ret == 1){
        cout << "str1 > str2" << endl;
    }else{
        cout << "str1 < str2" << endl;
    }
}

/**
 * string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串
 */
void test02(){
    // 创建字符串
    string email = "hxy1625309592@qq.com";
    int pos = email.find("@");
    string userName = email.substr(0,pos);
    // 输出结果
    cout << "name =" << userName << endl;   // name =hxy1625309592
}

void test03(){
    // 定义字符串
    string str = "www.baidu.com";
    vector<string> v;

    int pos = -1;
    int start = 0;
    // 条件判断
    while (true){
        pos = str.find(".", start);
        if(pos == -1){
            string subs = str.substr(start, str.size() - start);
            v.push_back(subs);
            break;
        }

        string subs = str.substr(start, pos - start);
        v.push_back(subs);
        start = pos + 1;
    }

    // 条件判断
    for(vector<string>:: iterator it = v.begin(); it !=v.end(); it++){
        cout << *it << endl;
    }
}

int main() {
    // 调用函数
    // test01();
    // test02();
    test03();
    return 0;
}