#include <iostream>
using namespace std;
/**
 * 构造函数的调用
 * @return
*/
// 创建Person类
class Person{
    /**
     * 构造函数的分类: 无参构造(默认) 代参构造
     * 类型:拷贝构造,普通构造
     * @return
     */
public:
    // 定义变量
    int age;

     Person(){
         cout << "默认构造函数调用" << endl;
     }

     Person(int a){
         cout << "代参构造函数调用" << endl;
     }

     // 拷贝构造:值传递的本质就是调用拷贝构造函数
     Person(const Person &p){
         cout << "拷贝构造函数调用" << endl;
         age = p.age;
     }

     ~Person(){
         cout << "析构函数的调用" << endl;

     }

};


int main() {
    // 括号法调用,在栈上创建对象(先进后出)
   /*
        Person p1(10);
        p1.age = 18;
        // 利用括号法调用拷贝构造函数
        Person p2(p1);
        cout << "p2的年龄是:"<< p2.age << endl;
    */

   // 2.显示法
   Person p3 = Person(10); // 代参构造函数
   // 拷贝构造函数
   p3.age = 21;
   Person p4 = Person(p3);
   cout << "p4的年龄是:"<< p4.age << endl;


    return 0;
}