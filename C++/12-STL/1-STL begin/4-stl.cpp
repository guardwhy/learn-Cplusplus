#include <iostream>
#include <vector>
#include <algorithm>
/**
 * 自定义数据类型指针
 */
using namespace std;

// 定义Prson类
class Person{
public:
    // 成员变量
    int m_Age;
    string m_Name;

    // 构造方法
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
};

int main() {
    // 创建对象，类似于二维数组
    vector< vector<int> >v;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    // 遍历添加
    for(int i=0; i < 5; i++){
        v1.push_back(i + 1);
        v1.push_back(i + 10);
        v1.push_back(i + 100);
    }

    // 3.将小容器,插入到大容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // 遍历容器
    for(vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++){
        for(vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++){
            cout << *vit << endl;
        }

    }
    return 0;
}