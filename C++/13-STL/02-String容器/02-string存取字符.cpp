#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 * string存取字符操作
 * @return
 */
int main()
{
    /*
    char& operator[](int n);//通过[]方式取字符
    char& at(int n);//通过at方法获取字符
    */

    // 定义字符串
    string s = "guardwhy";
    // 遍历字符串
    /*cout << "字符串的值:";
    for(int i=0; i < s.size(); i++){
        // 输出元素
        // cout << str[i] << " ";
        cout << s.at(i) << " ";
    }
    cout << endl;*/

    // []和at区别,[]访问越界 直接挂掉,at访问越界，抛出异常 out_of_range
    try {
        // cout << s[100] << endl; // 访问越界
        cout << s.at(100) << endl;  // 抛出异常
    } catch (exception &e) {
        cout << e.what() << endl;
    }
    return 0;
}
