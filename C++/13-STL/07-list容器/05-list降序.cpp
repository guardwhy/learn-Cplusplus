#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
/**
 * list升序降序
 * @return 
*/

// 声明函数
void printList(const list<int> &L){
    for(list<int>::const_iterator it = L.begin(); it != L.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

bool compareTo(int num1, int num2){
    return num1 > num2;
}

int main() {
    // 创建List容器
    list<int> List;
    // 容器尾部加入元素
    List.push_back(1);
    List.push_back(2);
    List.push_back(3);
    List.push_back(5);
    List.push_back(10);

    // 调用函数
    List.sort();
    // 调用函数
    cout << "容器元素(升序):";
    printList(List);

    // 调用函数
    List.sort(compareTo);
    // 调用函数
    cout << "容器元素(降序):";
    printList(List);
    return 0;
}