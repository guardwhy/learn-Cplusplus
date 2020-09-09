#include <iostream>
#include <vector>
using namespace std;
/*
vector构造函数：
    vector<T> v; //采用模板实现类实现，默认构造函数
    vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
    vector(n, elem);//构造函数将n个elem拷贝给本身。
    vector(const vector &vec);//拷贝构造函数。
*/
void printVector(vector<int> &v){
    // 遍历操作
    for(vector<int>::iterator it = v.begin(); it!= v.end(); it++){
        // 输出结果
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    // 定义容器
    vector<int> v;  // 默认构造
    vector<int> v2(5,10);
    cout<< "有参构造1:";
    // 调用函数
    printVector(v2);        // 有参构造1:10 10 10 10 10 

    cout<< "有参构造2:";
    vector<int>v3(v2.begin(), v2.end());
    // 调用函数
    printVector(v3);    // 有参构造2:10 10 10 10 10 

    cout<< "有参构造3:";  
    vector<int> v4(v3);
    // 调用函数
    printVector(v4);    // 有参构造3:10 10 10 10 10 
    return 0;
}
