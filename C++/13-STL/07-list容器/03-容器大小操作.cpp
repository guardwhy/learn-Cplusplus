#include <iostream>
#include <list>
using namespace std;
/*
list容器大小
*/
int main()
{
    // 容器对象
    list<int> L;
    // 容器尾部加入一个元素
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    // 在容器开头插入一个元素
    L.push_front(11);
    L.push_front(21);
    L.push_front(31);

    // 判断容器是否为空
    if(L.empty()){
        cout << "容器L为空..."<< endl;
    }else{
        cout << "容器L的大小:"<< L.size() << endl;  // 容器L的大小:6
    }

    // 返回第一个元素
    cout << "容器第一个元素:" << L.front() << endl;    // 容器第一个元素:31
    cout << "容器最后一个元素:" << L.back() << endl;    // 容器最后一个元素:30
    return 0;
}
