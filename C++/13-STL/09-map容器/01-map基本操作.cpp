#include <iostream>
#include <map>
using namespace std;
/**
 * map容器基本操作
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
    // 输出容器元素
    cout << "map1容器元素:"<< endl;
    for(map<int,int>::iterator it = map1.begin(); it!= map1.end(); it++){
        cout << "key:" << it->first << ", value="<< it->second << endl;
    }
    return 0;
}