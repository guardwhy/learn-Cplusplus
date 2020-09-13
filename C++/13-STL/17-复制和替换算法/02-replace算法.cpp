#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

/**
 *replace算法:将容器内指定范围的旧元素修改为新元素
 *replace_if算法:将容器内指定范围满足条件的元素替换为新元素
 * @return
*/
class Person{
public:
    bool operator()(int val){
        return val > 3;
    }
};

void replaceFunction02(){
    // 定义vector容器v1
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 将容器中的3 替换为66
    replace(v1.begin(), v1.end(), 3, 66);
    // 复制操作
    cout << "输出v1容器的元素:";
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));   // 输出v1容器的元素:0 1 2 66 4 5 6 7 8 9
    cout << endl;

    //将所有大于3的值,替换为35
    replace_if(v1.begin(), v1.end(), Person(), 35);
    // 复制操作
    cout << "输出v1容器的元素:";
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));   // 输出v1容器的元素:0 1 2 35 35 35 35 35 35 35
    cout << endl;
}

int main() {
    // 调用函数
    replaceFunction02();
    return 0;
}