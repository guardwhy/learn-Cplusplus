#include <iostream>
#include <vector>

using namespace std;
/**
    vector构造函数
    vector<T> v; //采用模板实现类实现，默认构造函数
    vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
    vector(n, elem);//构造函数将n个elem拷贝给本身。
    vector(const vector &vec);//拷贝构造函数。
 * @return
 */
// 函数
void printVector(vector<int>&v){
    // 遍历
    for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    // 创建对象
    vector<int> v;
    // 遍历
    for(int i=0; i<10; i++){
        // 添加操作
        v.push_back(i);
        // 输出容器的大小
        cout << v.capacity() << endl;
    }
}

// 构造函数
void test02(){
    // 创建默认构造
    vector<int> v;
    vector<int>v2(10, 100); // 10个100
    printVector(v2);

    vector<int>v3(v2.begin(), v2.end());
    printVector(v3); // 10个100

    vector<int> v4(v3);
    printVector(v4); // 10个100
}

int main() {
    // test01();
    test02();
    return 0;
}