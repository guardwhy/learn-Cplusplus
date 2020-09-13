#include <iostream>
#include <map>
using namespace std;
/**
 * map容器删除操作
 * @return
 */
int main() {
    /*
    clear();//删除所有元素
    erase(pos);//删除pos迭代器所指的元素，返回下一个元素的迭代器。
    erase(beg,end);//删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
    erase(keyElem);//删除容器中key为keyElem的对组。
    */

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

    // 删除Key为3的元素
    map1.erase(3);

    // 输出容器元素
    cout << "map1容器元素:"<< endl;
    for(map<int,int>::iterator it = map1.begin(); it!= map1.end(); it++){
        cout << "key:" << it->first << ", value="<< it->second << endl;
    }
    return 0;
}