#include <iostream>
#include <set>
using namespace std;
/*
对组的创建
*/
int main()
{
    pair<string, int> p1("curry", 10);
    cout << "姓名是:"<< p1.first << endl;
    cout << "年龄是:"<< p1.second << endl;

    pair<string, int> p2("kobe", 41);
    cout << "姓名是:"<< p2.first << endl;
    cout << "年龄是:"<< p2.second << endl;
    return 0;
}
