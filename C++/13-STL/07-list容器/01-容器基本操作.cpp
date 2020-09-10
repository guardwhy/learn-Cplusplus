#include <iostream>
#include <list>
#include <string>
using namespace std;
/**
 * list构造函数
 * @return
 */
int main()
{
    // 定义l1容器
    list<int> L1;
    // 向链表中插入元素
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(34);

    // 遍历容器
    cout << "容器的元素(正序输出):";
    for(list<int>::iterator it = L1.begin(); it != L1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "-------------------------------"<< endl;
    // 反序遍历
    cout << "容器的元素(逆序输出):";
    for(list<int>::reverse_iterator it = L1.rbegin(); it != L1.rend(); it++){
        cout << *it << " ";
    }
    return 0;
}
