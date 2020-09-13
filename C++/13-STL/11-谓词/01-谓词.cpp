#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * 谓词:普通函数或者仿函数的返回值是bool数据类型
 * @return
*/
class findNumber{
public:
    bool operator()(int val){
        return val > 20;
    }
};

class Compare{
public:
    bool operator()(int v1, int v2){
        return v1 > v2;
    }
};

// 声明函数
void Function01(){
    // 定义容器
    vector<int> v;
    // 插入容器
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // 寻找到第一个大于20元素
    vector<int>::iterator pos = find_if(v.begin(), v.end(), findNumber());
    // 条件遍历
    if(pos != v.end()){
        cout << "容器第一个大于20元素:"<< *pos << endl;
    } else{
        cout << "未找到该元素..." << endl;
    }

    // 二元谓词
    sort(v.begin(), v.end(), Compare());
}


int main() {

    // 一元谓词
    Function01();
    return 0;
}