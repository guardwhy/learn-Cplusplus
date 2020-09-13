#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
using namespace std;

/**
 * 容器元素排序
 * @return
*/
void sortFunction02(){
    // 定义vector容器
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 利用sort降序
    sort(v1.begin(), v1.end(), greater<int>());
    cout << "容器元素:";
    for_each(v1.begin(), v1.end(), [](int val){cout << val << " ";});   // 容器元素:9 8 7 6 5 4 3 2 1 0 
    cout << endl;
}

int main() {
    // 随机数种子
    srand((unsigned int)time(NULL));
    // 调用函数
    sortFunction02();
    return 0;
}