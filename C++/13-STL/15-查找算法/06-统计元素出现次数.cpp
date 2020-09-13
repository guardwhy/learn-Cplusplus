#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * 统计元素出现的次数
 * @return
*/
class GreaterNumber{
public:
    bool operator()(int val){
        return val >= 5;
    }
};

// 声明函数
void CTfunction01(){
    // 定义vector容器
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 插入数据
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);

    // 统计5的元素个数,按值统计个数
    int num = count(v1.begin(), v1.end(), 5);
    cout << "容器元素为5的个数:" << num << endl;
}

// 声明函数
void CTfunction02(){
    // 定义vector容器
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 插入数据
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);

    // 查找大于等于5的元素个数
    int num = count_if(v1.begin(), v1.end(), GreaterNumber());
    cout << "容器大于等于5的个数:" << num << endl;
}

int main() {
    // count算法 统计元素出现次数
    CTfunction01();
    // count_if算法 统计元素出现次数
    CTfunction02();
    return 0;
}