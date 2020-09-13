#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
using namespace std;

/**
 * reverse算法:反转指定范围的元素
 * @return
*/
void reverseFunction04(){
    // 定义vector容器
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 插入元素
    v1.push_back(35);
    v1.push_back(38);

    cout << "反转前遍历结果:" << endl;
    for_each(v1.begin(), v1.end(), [](int val){cout << val << " ";});
    cout << endl;

    reverse(v1.begin(), v1.end());
    cout << "反转后遍历结果:" << endl;
    for_each(v1.begin(), v1.end(), [](int val){cout << val << " ";});
    cout << endl;
}

int main() {
    // 随机数种子
    srand((unsigned int)time(NULL));
    // 调用函数
    reverseFunction04();
    /*
    反转前遍历结果:
    0 1 2 3 4 5 6 7 8 9 35 38 
    反转后遍历结果:
    38 35 9 8 7 6 5 4 3 2 1 0 
    */
    return 0;
}