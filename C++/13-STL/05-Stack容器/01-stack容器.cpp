#include <iostream>
#include <stack>
using namespace std;
/**
 * stack容器操作
 * @return
*/

int main() {
    // 定义栈容器
    stack<int> s;
    // 入栈操作
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(20);

    // 返回堆栈的大小
    cout << "元素的个数:" << s.size() << endl;   // 元素的个数:5

    //判断堆栈是否为空
    cout <<"栈顶元素:";
    while (!s.empty())
    {
        //栈顶元素
        cout<< s.top()<< " ";

        //出栈
        s.pop();    // 栈顶元素:20 4 3 2 1
    }
    cout << endl;

    cout << "元素个数:"<< s.size() << endl; // 元素个数:0

    return 0;
}