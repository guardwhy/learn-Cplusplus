#include <iostream>
#include <map>
using namespace std;
/**
 * map查找操作
 * @return
 */
int main() {
    // 创建map1容器
    map<int, int> map1;
    // 插入元素
    map1.insert(pair<int,int>(1, 10));
    // 方式:2
    map1.insert(make_pair(2, 20));
    // 方式3:
    map1.insert(map<int,int>::value_type(3,30));
    // 方式4
    map1[4] = 43;

    map<int,int>::iterator ret = map1.find(3); //查找
    if (ret != map1.end())
    {
        cout << "元素key="<<ret->first << ", value=" << ret->second << endl;
    }else
    {
        cout << "未找到该元素" << endl;
    }

    int num = map1.count(3);
    cout << "key为3的元素个数为:" << num << endl;


    //lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
    map<int,int>::iterator it = map1.lower_bound(3);
    if (it != map1.end())
    {
        cout << "lower_bound的值,key="<< it->first << ", value=" << it->second << endl;
    }else
    {
        cout << "未找到该元素" << endl;
    }

    //upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。

    it = map1.upper_bound(3);
    if (it != map1.end())
    {
        cout << "upper_bound的值,key=" << it->first << ", value = " << it->second << endl;
    }else
    {
        cout << "未找到该元素" << endl;
    }

    //equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
    pair< map<int,int>::iterator, map<int,int>::iterator> ret2 = map1.equal_range(3);
    if (ret2.first != map1.end())
    {
        cout << "equal_range中的lower_bound的值,key=" << ret2.first->first << ", value=" << ret2.first->second << endl;
    }else{
        cout << "未找到该元素" << endl;
    }

    if (ret2.second !=map1.end())
    {
        cout << "equal_range中的upper_bound的值,key=" << ret2.second->first << ", value=" << ret2.second->second << endl;
    }else{
        cout << "未找到该元素" << endl;
    }
    return 0;
}