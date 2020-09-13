#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/*
transform算法 将指定容器区间元素搬运到另一容器中
注意 : transform 不会给目标容器分配内存，所以需要我们提前分配好内存
@param beg1 源容器开始迭代器
@param end1 源容器结束迭代器
@param beg2 目标容器开始迭代器
@param _cakkback 回调函数或者函数对象
@return 返回目标容器迭代器
*/
class Transform{
public:
    int operator()(int val){
        // 返回结果
        return val + 10;
    }
};
// 打印函数
void myPrint(int val)
{
    cout << val << " ";
}

int main() {
    // 定义vector容器
    vector<int> v1;
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }

    // 目标容器
    vector<int> v2;
    v2.resize(v1.size());
    // 将指定容器区间元素搬运到另一容器中
    transform(v1.begin(), v1.end(), v2.begin(), Transform());
    // 遍历容器
    cout << "v2容器元素:";
    for_each(v2.begin(), v2.end(), myPrint);
    return 0;
}