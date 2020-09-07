#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * 容器嵌套容器
 * @return
 */
int main() {
    // 定义容器
    vector<vector<int>> v ;
    // 容器对象
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    // 遍历容器
    for(int i=0; i<5; i++){
        // 插入数据
        v1.push_back(i+ 1);
        v1.push_back(i+ 10);
        v1.push_back(i+ 20);
    }

    // 将小容器插入大容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // 遍历大容器
    for (vector<vector<int>>::iterator it = v.begin(); it != v.end();it++){
        for(vector<int>::iterator vit = (*it).begin(); vit!=(*it).end(); vit++){
            cout << *vit << " ";
        }

        cout << endl;
    }
    return 0;
}