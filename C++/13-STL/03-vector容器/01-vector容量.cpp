#include <iostream>
#include <vector>
using namespace std;
/*
vector容器
*/
int main()
{
    // 定义vector容器
    vector<int> v;
    // 遍历容器
    cout << "容器的容量:";
    for(int i=0; i<5; i++){
        v.push_back(i);
        cout<< v.capacity() << " ";     // 容器的容量:1 2 4 4 8 
    }
    cout << endl;
    return 0;
}
