#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/**
 * set_union算法:求两个set集合的并集
 * @return
*/
void set_unionFunction02(){
    // 创建容器对象
    vector<int> v1;
    vector<int> v2;

    // 添加元素
    for(int i=0; i < 10; i++){
        v1.push_back(i);
        v2.push_back(i+5);
    }
    // 目标对象
    vector<int> vTarget;
    // 分配大小
    vTarget.resize(v1.size() + v2.size());
    // 合并对象容器
    vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    cout << "两个vector并集元素:";
    for_each(vTarget.begin(), itEnd, [](int val){cout << val << " ";});
}
int main() {
    // 调用函数
    set_unionFunction02();
    return 0;
}