#include <iostream>
using namespace std;
/**
 * cin.get()两个参数 获取字符串
 * @return
*/
int main() {
    cout << "请输入字符串:" << endl;
    // 定义字符
    char buf[1024] = {0};
    // 换行符遗留在缓冲区中
    cin.get(buf, sizeof(buf));
    char ch = cin.get();
    // 条件判断
    if(ch == '\n'){
        cout << "换行符遗留在缓冲区中" << endl;
    }else{
        cout << "换行符未遗留在缓冲区中" << endl;
    }

    cout << "buf=" << buf << endl;
    return 0;
}