#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/**
 * set_intersection算法:两个set集合的交集
 * @return
*/
void intersectionFunction01(){
    // 创建容器对象
    vector<int> v1;
    vector<int> v2;

    // 添加元素
    for(int i=0; i < 10; i++){
        v1.push_back(i);
        v2.push_back(i+5);
    }
    // 目标集合
    vector<int> vTarget;
    vTarget.resize(min(v1.size(), v2.size()));
    vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

    cout <<"两个vector交集元素:";
    for_each(vTarget.begin(), itEnd, [](int val){cout << val << " ";});
    cout << endl;
}

int main() {
    // 调用函数
    intersectionFunction01();
    return 0;
}