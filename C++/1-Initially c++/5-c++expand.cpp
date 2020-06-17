#include <cstdlib>
#include <iostream>
/**
 * c++对c语言的增强和拓展
 */
using namespace std;

// 1.全局变量检测加强
int a;
// int a = 10; a重定义

// 2.获取长方形的面积
int getArea(int w, int l){
    return w * l;
}

/**
 * 函数检测增强  返回值检测增强  形参类型检测增强  调用时候参数数量检测增强
 */
 // 声明test01()函数
void test1(){
    // getArea(10, 12, 13); 参数传入过多
}

/**
 * 类型转换检测加强
 * @return
 */
 // 声明test02()函数
 void test2(){
     // 指针左右类型必须一样，才能赋值
     int * str = (int *)malloc(sizeof(int)* 8);
 }

 /**
  * struct增强
  * @return
  */
  // 在C++语言下,可以在结构体中放函数
  struct Student{
      int age;
      void function(){
          age++;
      }
  };

  // 声明test03()函数
  void test03(){
      // 在C++下面 创建结构体变量的时候,可以简化关键字struct
      Student st;
      st.age = 17;
      st.function();
      cout << "学生的年龄是:" << st.age << endl;
  }

  /**
   * bool数据类型的扩展,C++语言下有bool数据类型,代表真和假
   * @return
   */
   bool flag;
   void test04(){
       // bool类型占用一个字节
       cout << "bool类型占用"<< sizeof(bool) << "字节" << endl;
       // 真 true(1) 假 false(0)
       flag = true;
       cout << flag << endl;
   }

   /**
    * 三目运算符增强
    * C++语言下 三目运算符返回的是变量，可以继续赋值
    * @return
    */

   void test05(){
       // 定义变量
       int a = 10;
       int b = 20;
       // printf("a > b ? a : b = %d\n", a > b ? a : b);

       (a > b ? a : b) =100; // b = 100   加上括号 保证运算完整性
       cout << "a = " << a << endl; // 10
       cout << "b = " << b << endl; // 100
   }

   /**
    * const增强
    * @return
    */
    // 定义全局变量
    const int const_A = 10;
    // 声明函数
    void test06(){
        /**
         * 全局变量受到常量区的保护,无法修改
         */
        // const_A = 1000;

        /*
        int* p = (int *)&const_A;
        *p = 100;
        cout << "const_A的值:"<< const_A<< endl;
        */

        // 定义局部变量
        const int const_B = 20;
        int *p = (int*)&const_B; // 间接修改也失败。
        *p = 200;
        // 输出结果
        cout << "const_B的值是"<< const_B << endl;
    }

int main() {
    printf("hello world!!!\n");
    // 调用函数
    // test03();
    // test04();

    // test05();

    test06();
    return 0;
}