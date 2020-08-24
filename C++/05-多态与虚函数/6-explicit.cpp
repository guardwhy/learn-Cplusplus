#include <iostream>
/**
 * explicit关键字的意义
 */
using namespace std;
 class MyString{
 public:
     explicit MyString(int len){
         cout << "MyString有参构造函数(int )调用" << endl;
     }
     MyString(char * str){
         cout << "MyString有参构造函数(char *)调用" << endl;
     }
 };

 // 调用函数
 void test(){
     MyString str = "kobe is mvp";
     MyString str1 = MyString("curry is child");

     MyString str2 = MyString(10);
 }
int main() {
    // 调用函数
    test();
    return 0;
}