#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
/**
 * list反转排序
 * @return
*/

// 声明函数
void printList(const list<int> &L){
    for(list<int>::const_iterator it = L.begin(); it != L.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 定义list容器
    list<int> List;
    // 遍历容器
    for(int i=0; i< 10; i++){
        // 向容器中添加元素
        List.push_back(i);
    }
    // 输出容器元素
    cout << "容器元素(排序):";
    // 调用函数
    printList(List);

    // 反转排序
    List.reverse();
    // 输出容器元素
    cout << "容器元素(逆序):";
    // 调用函数
    printList(List);
    return 0;
}