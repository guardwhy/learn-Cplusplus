#include <iostream>
#include <set>
using namespace std;
/**
 * set和mulset区别
 * @return
*/

int main() {
    // 创建set容器
    set<int> st;
    // 插入元素
    pair<set<int>::iterator, bool> ret = st.insert(15);
    // 条件判断
    if(ret.second){
        cout << "第一次插入成功 "<< endl;  // 第一次插入成功
    }else{
        cout << "第一次插入失败" << endl;
    }

    ret = st.insert(15);
    // 条件判断
    if(ret.second){
        cout << "第二次插入成功 "<< endl;
    }else{
        cout << "第二次插入失败" << endl;  // 第二次插入失败
    }

    // 创建set容器
    multiset<int> multiset1;
    // 插入数据
    multiset1.insert(10);
    multiset1.insert(10);
    // 遍历容器
    for(multiset<int>::iterator it = multiset1.begin(); it!= multiset1.end(); it++){
        // 输出结果
        cout << *it << endl;
    }
    return 0;
}