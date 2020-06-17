#include <iostream>

using namespace std;

// 字符串重新分配内存后，在使用原来的引用可能会发生错误
void test01(){
    // 创建字符串
    string s = "abcdefg";
    char& a = s[2];
    char& b = s[3];

    a = '1';
    b = '2';

    // 输出结果
    cout << s << endl; // ab12efg
    cout << (int*) s.c_str() << endl; // 0x63fdb0

    // 重新定义
    s = "pppp23457uu";
    cout << s << endl; // pppp23457uu
    cout << (int*) s.c_str() << endl; // 0x63fdb0
}

/*
写一个函数，函数内部将string字符串中的所有小写字母都变为大写字母。
*/
void test02(){
    // 创建字符串
    string str = "abcdefg";
    for(int i=0; i< str.size(); i++){
        // 小写转大写
        // str[i] = toupper(str[i]);

        // 大写转小写
        str[i] = tolower(str[i]);
    }

    cout << str << endl;
}
int main() {
    // test01();
    test02();
    return 0;
}