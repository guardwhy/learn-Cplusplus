#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
using namespace std;
/**
 * merge算法:容器元素合并,并存储到另一容器中
 * @return
*/
// 声明函数
void mergeFunction01(){
    // 创建容器对象
    vector<int> v1;
    vector<int> v2;

    // 添加元素
    for(int i=0; i < 10; i++){
        v1.push_back(i);
        v2.push_back(i+1);
    }
    // 目标容器
    vector<int> vTarget;
    vTarget.resize(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    // 输出结果
    cout << "容器合并元素:";
    for_each(vTarget.begin(), vTarget.end(), [](int val){cout << val << " ";});
    cout << endl;
}

int main() {
    // 随机数种子
    srand((unsigned int)time(NULL));
    // 调用函数
    mergeFunction01();
    return 0;
}