#include <iostream>
// 文件读写 头文件
#include <fstream>
#include <string>
using namespace std;
/*
读文件
*/
int main()
{
    // 创建对象
    ifstream ifs;
    // 打开文件
    ifs.open("./a.txt", ios::in);
    // 判断对象是否打开成功
    if(!ifs.is_open()){
        cout << "文件打开失败" << endl;
    }
    // 方式一:
    /*char buf[1024] = {0};
    while (ifs >> buf)
    {
        cout << buf << endl;
    }
    */

   // 方式二:
   char buf[1024] = {0};
   while(ifs.getline(buf, sizeof(buf))){
       cout << buf << endl;
   }
    
    // 关闭对象
    ifs.close();
    return 0;
}
