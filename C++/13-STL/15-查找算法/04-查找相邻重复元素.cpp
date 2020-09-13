#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/*
adjacent_find算法 查找相邻重复元素
@param beg 容器开始迭代器
@param end 容器结束迭代器
@param _callback 回调函数或者谓词(返回bool类型的函数对象)
@return 返回相邻元素的第一个位置的迭代器
*/
int main() {
    // 定义容器v1
    vector<int> v1;
    // 添加元素
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(2);
    // 查找相邻重复元素
    vector<int>::iterator it = adjacent_find(v1.begin(), v1.end());
    // 条件判断
    if(it != v1.end()){
        cout << "找到相邻重复元素为:" << *it << endl;
    }else{
        cout << "未找到容器该元素..."<< endl;
    }
    return 0;
}