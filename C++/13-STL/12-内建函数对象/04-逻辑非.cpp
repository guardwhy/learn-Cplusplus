#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/**
 *template<class T> bool logical_not<T>:逻辑非
 * @return
*/
int main() {
    // 定义vector容器
    vector<int> v1;
    // 插入数据
    v1.push_back(true);
    v1.push_back(false);
    v1.push_back(true);
    v1.push_back(false);

    // 定义vector容器
    vector<bool> v2;
    v2.resize(v1.size());

    // 搬运算法
    transform(v1.begin(), v1.end(), v2.begin(), logical_not<int>());
    // 遍历操作
    cout << "容器元素:";
    for(vector<bool>::iterator it = v2.begin(); it!= v2.end(); it++){
        cout << *it <<" ";
    }
    return 0;
}