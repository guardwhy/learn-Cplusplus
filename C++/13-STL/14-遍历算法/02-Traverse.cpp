#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/**
遍历算法 遍历容器元素:
for_each 有返回值。
* @return
*/
class MyPrint{
public:
    // 成员变量
    int m_Count;
public:
    // 构造函数
    MyPrint(){
        m_Count = 0;
    }
    void operator()(int val){
        // 输出结果
        cout << val << " ";
        m_Count ++;
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
    MyPrint mp = for_each(v1.begin(), v1.end(), MyPrint());
    cout << endl;
    cout << "mp中的count值:" << mp.m_Count << endl;
    return 0;
}