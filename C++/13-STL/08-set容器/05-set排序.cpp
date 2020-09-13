#include <iostream>
#include <set>
#include <string>
using namespace std;
/**
 * set排序
 * @return
*/
bool compareTo(int num1, int num2){
    return num1 > num2;
}

int main() {
    // 创建set容器
    set<int> st;
    st.insert(10);
    st.insert(30);
    st.insert(40);
    st.insert(20);
    st.insert(50);

    // 遍历set容器
    cout << "set容器元素:";
    for (set<int>::iterator it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}