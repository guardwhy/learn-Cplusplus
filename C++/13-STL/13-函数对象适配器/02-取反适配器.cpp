#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * 取反适配器
 * @return
*/
class GreaterNumber: public unary_function<int, bool>{
    // 判断大于5的元素
    bool operator()(int val)const {
        return val > 5;
    }
};

int main() {
    /*
        取反适配器 not1
        继承 public unary_function<参数类型,返回值类型>
        加const
    */
    
    // 定义vector容器
    vector<int> v1;
    // 插入数据
    for(int i=0; i<10; i++){
        v1.push_back(i);
    }
    // 一元取反适配器
    vector<int>::iterator ret = find_if(v1.begin(), v1.end(), not1(bind2nd(greater<int>(), 5)));
    // 条件判断
    if(ret != v1.end()){
        cout << "找到小于5的数据为:" << *ret << endl;
    } else{
        cout << "未找到容器的元素..." << endl;
    }

    // 二元取反适配器
    cout << "容器元素:";
    sort(v1.begin(), v1.end(), not2(less<int>()));
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}