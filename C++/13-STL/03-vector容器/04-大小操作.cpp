#include <iostream>
#include <vector>
using namespace std;
/**
 * vector大小操作
 * @return
*/
// 声明函数
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
    /*
    size();//返回容器中元素的个数
    empty();//判断容器是否为空
    resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
    resize(int num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长>度的元素被删除。
    capacity();//容器的容量
    reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问。
    front();//返回容器中第一个数据元素
    back();//返回容器中最后一个数据元素
    */

    // 定义数组
    int arr[] = {2, 3, 4, 1, 9};
    vector<int> v1(arr, arr+sizeof(arr) / sizeof(int));

    // 容器的值
    if(v1.empty()){
        cout << "容器v1为空"<< endl;
    }else{
        cout << "容器元素size:"<< v1.size() << endl;    // 容器元素size:5
    }

    // 调用函数
    cout << "容器vector元素:";
    printVector(v1);    // 容器vector元素:2 3 4 1 9

    // 填充容器
    cout << "容器vector元素:";
    v1.resize(9, 8);
    printVector(v1);    // 容器vector元素:2 3 4 1 9 8 8 8 8

    // 重新指定容器长度
    cout << "重新指定容器vector元素:";
    v1.resize(3);
    printVector(v1);    // 重新指定容器vector元素:2 3 4

    cout << "第一个元素:" << v1.front() << endl;
    cout << "最后一个元素:" << v1.back() << endl;
    return 0;
}
