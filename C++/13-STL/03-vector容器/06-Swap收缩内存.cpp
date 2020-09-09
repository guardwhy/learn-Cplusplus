#include <iostream>
#include <vector>
using namespace std;
/**
 * 收缩内存
 * @return
*/
int main() {
    // 定义vector容器
    vector<int> v;
    // 遍历容器
    for(int i=0; i < 10; i++){
        v.push_back(i);
    }
    // 长度
    cout << "size大小:" << v.size() << endl;  // size大小:10
    cout << "capacity容量:" << v.capacity() << endl;  // capacity容量:16

    v.resize(3);
    cout << "size大小:" << v.size() << endl;  // size大小:3
    cout << "capacity容量:" << v.capacity() << endl;  // capacity容量:16

    // 收缩内存
    vector<int> (v).swap(v);
    cout << "size大小:" << v.size() << endl;  // size大小:3
    cout << "capacity容量:" << v.capacity() << endl;  // capacity容量:3
    return 0;
}