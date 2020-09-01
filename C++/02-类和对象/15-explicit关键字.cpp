#include <iostream>
#include <string.h>
using namespace std;
/**
 * explicit关键字:防止隐式创建对象
 * @return
*/
// 创建MyString类
class MyString{
public:
    // 代参构造
    explicit MyString(int len){
        cout << "MyString有参构造函数(int)调用" << endl;
    }

    MyString(char* str){
        cout << "MyString有参构造函数(char*)调用" << endl;
    }
};
int main() {
    // 创建对象
    MyString str = "abcde";
    MyString str2("abcde");
    MyString str3 = MyString("abcde");

    // MyString str5 = 10;  // 隐式创建对象
    return 0;
}