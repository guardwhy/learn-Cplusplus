#include <iostream>

using namespace std;

/**
 string插入和删除操作
    string& insert(int pos, const char* s); //插入字符串
    string& insert(int pos, const string& str); //插入字符串
    string& insert(int pos, int n, char c);//在指定位置插入n个字符c
    string& erase(int pos, int n = npos);//删除从Pos开始的n个字符
 * @return
 */
void test01(){
    // 定义字符串
    string str = "hello";
    // 插入，参数 指定位置。参数2 插入数据
    str.insert(1, "111");
    cout << str << endl; // h111ello

    // 删除
    str.erase(1,3);
    cout << str << endl; // hello
}


void doWork2(string str){

}

//string和c-style字符串转换
void test02(){
    // 定义字符串
    const char * str = "hello";
    // const char * 转string
    string str2 = string(str);
    // doWork(str2);

    //string 转const char *
    const char * str3 = str2.c_str();
    doWork2(str3);
}
int main() {
    // test01();
    test02();
    return 0;
}