#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/*
find算法 查找元素
@param beg 容器开始迭代器
@param end 容器结束迭代器
@param value 查找的元素
@return 返回查找元素的位置
*/
class GreaterNumber{
public:
    bool operator()(int val){
        return val > 5;
    }
};

int main() {
    // 定义vector容器
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 7; i++){
        // 插入元素
        v1.push_back(i);
    }

    // 查找1元素是否存在
    vector<int>::iterator pos1 = find(v1.begin(), v1.end(), 1);
    // 条件判断
    if(pos1 != v1.end()){
        cout << "容器元素存在,元素是:" << *pos1 << endl;
    } else{
        cout << "该元素不存在.."<< endl;
    }

    // 查找大于5的元素
    vector<int>::iterator pos2 = find_if(v1.begin(), v1.end(),GreaterNumber());
    // 条件判断
    if(pos2 != v1.end()){
        cout << "大于5的元素:" << *pos2 << endl;
    } else{
        cout << "该元素不存在.."<< endl;
    }
    return 0;
}