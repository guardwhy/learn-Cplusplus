#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
/**
 * set查找操作
 * @return
 */
int main() {

    /*
    find(key);//查找键key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
    count(key);//查找键key的元素个数
    lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
    upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
    equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
    */

    // 定义set容器
    set<int> set1;
    // 向容器中插入元素
    set1.insert(10);
    set1.insert(11);
    set1.insert(12);
    set1.insert(13);
    set1.insert(15);
    // 查找元素
    set<int>::iterator pos = set1.find(12);
    // 条件判断
    if(pos != set1.end()){
        cout << "该容器元素:" << *pos << endl;
    } else{
        cout << "该元素不存在容器中"<< endl;
    }

    // count统计数值
    int num = set1.count(13);
    cout << "元素的个数:" << num << endl;

    // lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
    set<int>::iterator  ret = set1.lower_bound(13);
    // 条件判断
    if(ret != set1.end()){
        cout << "找到lower_bound的值是:" << *ret << endl;
    }else{
        cout << "未找到该元素" << endl;
    }

    //upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
    ret = set1.upper_bound(13);
    // 条件判断
    if(ret != set1.end()){
        cout << "找到upper_bound的值是:" << *ret << endl;
    }else{
        cout << "未找到该元素" << endl;
    }

    //equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
    pair<set<int>::iterator, set<int>::iterator> ret1 = set1.equal_range(12);
    if(ret1.first != set1.end()){
        cout <<"找的了equal_range中的lower_bound的值为" << *(ret1.first)<< endl;
    }else{
        cout << "未找到该元素" << endl;
    }

    if(ret1.second != set1.end()){
        cout <<"找的了equal_range中的upper_bound的值为" << *(ret1.second)<< endl;
    }else{
        cout << "未找到该元素" << endl;
    }
    return 0;
}