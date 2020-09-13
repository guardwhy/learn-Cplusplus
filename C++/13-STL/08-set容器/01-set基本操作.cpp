#include <iostream>
#include <set>
using namespace std;
/**
 * set插入和删除操作
 * @return
*/
// 声明打印函数
void printSet(set<int> &s){
    // 迭代器遍历
    for(set<int>::iterator it = s.begin(); it!= s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 定义set容器
    set<int> set;
    // 向容器中插入元素
    set.insert(10);
    set.insert(11);
    set.insert(12);
    set.insert(13);
    set.insert(15);

    // set容器会自动排序,默认从小到大, 不允许插入重复的值
    cout << "set容器元素:";
    printSet(set);  // set容器元素:10 11 12 13 15

    // 删除元素
    set.erase(11);
    cout << "set容器元素(删除):";
    printSet(set);  // set容器元素(删除):10 12 13 15
    return 0;
}