#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

/**
 * swap:互换两个容器的元素
 * @return
*/
void swapFunction03(){
    // 创建容器对象
    vector<int> v1;
    vector<int> v2;

    // 添加元素
    for(int i=0; i < 10; i++){
        v1.push_back(i);
        v2.push_back(i+10);
    }

    cout << "交换前元素:"<< endl;
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout," "));
    cout << endl;
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout," "));
    cout << endl;
    // 交换函数
    swap(v1, v2);

    cout << "交换后元素:"<< endl;
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout," "));
    cout << endl;
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout," "));
    cout << endl;
}

int main() {
    // 调用函数
    swapFunction03();
    return 0;
}