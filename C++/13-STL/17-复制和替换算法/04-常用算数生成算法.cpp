#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric> //accumulate头文件
#include <iterator>
using namespace std;
/**
 * accumulate算法:计算容器元素累计总和
 * @return
*/
void accumulateFunction01(){
    // 定义vector容器
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 参数3:累加起始值
    int sum = accumulate(v1.begin(), v1.end(), 200);
    cout << "容器元素总和:"<< sum << endl;
}

/**
 * fill算法:向容器中添加元素
 * @return
*/
void fillFunction02(){
    // 定义vector容器
    vector<int> v1;
    v1.resize(10);
    fill(v1.begin(), v1.end(), 100);
    cout << "容器(向容器添加元素):";
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main() {
    // 调用函数
    accumulateFunction01();
    cout << "+++++++++++++"<< endl;
    fillFunction02();
    return 0;
}