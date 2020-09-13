#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/**
遍历算法 遍历容器元素:
    @param beg 开始迭代器
    @param end 结束迭代器
    @param _callback  函数回调或者函数对象
    @return 函数对象
* @return
*/
class MyPrint{
public:
    void operator()(int val){
        // 输出结果
        cout << val << " ";
        //m_Count ++;
    }
};

int main() {
    // 定义vector容器
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 5; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 输出容器元素
    cout << "容器元素:";
    for_each(v1.begin(), v1.end(), MyPrint());
    return 0;
}