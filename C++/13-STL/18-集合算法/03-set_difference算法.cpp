#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/**
 * set_difference算法:两个set集合的差集
 * @return
*/
int main()
{
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
    vTarget.resize(max(v1.size(),v2.size()));
    // 合并对象容器
    vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    cout << "容器元素差集1:";
    for_each(vTarget.begin(), itEnd, [](int val){cout << val << " ";}); // 容器元素差集1:0 1 2 3 4 
    cout << endl;

    // 合并对象容器
    itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.begin(),vTarget.begin());
    cout << "容器元素差集2:";
    for_each(vTarget.begin(), itEnd, [](int val){cout << val << " ";}); // 容器元素差集2:5 6 7 8 9 10 11 12 13 14
    cout << endl;
    
    return 0;
}
