#include <iostream>
// 文件读写 头文件
#include <fstream>
#include <string>
using namespace std;
/*
写文件
*/
int main()
{
    // 创建对象
    ofstream ofs;
    // 打开文件
    ofs.open("./a.txt", ios::out | ios::trunc);
    // 判断对象是否打开成功
    if(!ofs.is_open()){
        cout << "文件打开失败" << endl;
    }
    ofs << "姓名:curry" << endl;
    ofs << "年龄: 10" << endl;
    ofs << "性别: 男" << endl;

    // 关闭对象
    ofs.close();
    return 0;
}
