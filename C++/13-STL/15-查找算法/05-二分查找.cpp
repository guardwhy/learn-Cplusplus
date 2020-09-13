#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * binary_search算法 二分查找法
 * @return
 */
int main() {
    // 定义vector容器
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 判断位置
    bool pos = binary_search(v1.begin(), v1.end(), 9);
    // 条件判断
    if(pos){
        cout << "找到了容器该元素.."<< endl;
    }else{
        cout << "未找到容器的元素.."<< endl;
    }
    return 0;
}