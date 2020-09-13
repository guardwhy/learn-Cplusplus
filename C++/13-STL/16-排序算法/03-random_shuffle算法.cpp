#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
using namespace std;
/**
 * random_shuffle算法:对指定范围内的元素随机调整次序
 * @return
*/
void randomFunction03(){
    // 定义vector容器
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 调用函数
    random_shuffle(v1.begin(), v1.end());
    cout << "容器元素:";
    for_each(v1.begin(), v1.end(), [](int val){cout << val << " ";});   // 容器元素:2 0 6 9 8 1 3 7 4 5 
    cout << endl;
}

int main() {
    // 随机数种子
    srand((unsigned int)time(NULL));
    // 调用函数
    randomFunction03();
    return 0;
}