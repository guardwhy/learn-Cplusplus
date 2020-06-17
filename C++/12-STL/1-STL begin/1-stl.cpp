#include <iostream>
#include <vector> //单端数组
#include <algorithm>
/**
 * 遍历方式
 */
using namespace std;

// 定义函数
void myPoint(int val){
    cout << val << endl;
}

int main()
{

    // 定义数组,类是于myArray<int>myIntArray
    vector<int>v;

    // 2.插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    /**
     * 第一种遍历方式，利用迭代器遍历容器中的数据
     */
    // 起始遍历
    /**
     * vector<int>::iterator itBegin = v.begin();
    // 结束迭代器
    vector<int>::iterator itEnd = v.end();

    // 开始遍历
    while (itBegin!= itEnd)
    {
       // 输出结果
       // 世界你好
       cout << *itBegin << endl;

       cout << "世界你好" << endl;

       itBegin ++;
    }

    */

    // 第二种遍历方式
     /*
         for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
            cout << *it << endl;
         }
      */

    /**
     * 第三种遍历方式
     */
    for_each(v.begin(), v.end(), myPoint);

    return 0;
}
