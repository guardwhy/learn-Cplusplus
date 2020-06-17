#include <iostream>
/**
 * string存取字符操作
 */
using namespace std;

/**
    char& operator[](int n);//通过[]方式取字符
    char& at(int n);//通过at方法获取字符
 * @return
 */

int main() {
    // 定义字符串
    string s = "hello";
    // 遍历操作
    for(int i=0; i<s.size(); i++){
        // 输出结果
        /*cout << s[i] << endl;
        cout << s.at(i) << endl;*/

        //[]和at区别，[]访问越界 直接挂掉，at访问越界，抛出异常 out_of_range

        try{
            // cout << s[100] << endl;
            cout << s.at(100) << endl;
        } catch (exception & e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}