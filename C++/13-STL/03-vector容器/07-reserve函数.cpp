#include <iostream>
#include <vector>
using namespace std;
/*
reserve():预留内存空间
*/
int main()
{
    // 定义容器
    vector<int> v;
    // 提高预留空间
    v.reserve(10);

    // 定义指针变量
    int *p = NULL;
    int num = 0;
    // 遍历操作
    for(int i=0; i<10; i++){
        // 插入容器操作
        v.push_back(i);
        if(p != &v[0]){
            p = &v[0];
            num++;
        }
    }

    // 输出num
    cout << "num=" << num << endl;  // num = 1
    return 0;
}
