#include <iostream>
/**
 * explicit�ؼ��ֵ�����
 */
using namespace std;
 class MyString{
 public:
     explicit MyString(int len){
         cout << "MyString�вι��캯��(int )����" << endl;
     }
     MyString(char * str){
         cout << "MyString�вι��캯��(char *)����" << endl;
     }
 };

 // ���ú���
 void test(){
     MyString str = "kobe is mvp";
     MyString str1 = MyString("curry is child");

     MyString str2 = MyString(10);
 }
int main() {
    // ���ú���
    test();
    return 0;
}