#include <iostream>
/**
 * 速增运算符重载
 */
using namespace std;

// 创建myInter类
class MyInter{
    // 友元函数
    friend ostream& operator<< (ostream & cout, MyInter myInter);
    // 定义变量
private:
    int num;
public:
    // 构造函数
    MyInter(){
        num = 0;
    }

    // 重载递增前置运算符
    MyInter& operator++(){
        // 先++
        num++;
        // 后返回自身
        return *this;
    }

    // 重载递增后置运算符,如果在形参中添加int占位参数，编译器可以识别出这是后置++。
    MyInter operator++(int){
        // 记录原来的值
        MyInter temp = *this;
        // 再实行++
        num++;
        // 再将记录的值返回
        return temp;
    }

};

// 全局运算符重载
ostream& operator<< (ostream & cout, MyInter myInter){
    cout << myInter.num;
    return cout;
}

// 声明函数
void test01(){
    // 创建对象
    MyInter myInter;
    cout << myInter << endl;    // 0
    cout << ++(++myInter) << endl;  // 2
    cout << myInter <<endl; // 2
}

// 后置递增
void test02(){
    // 创建对象
    MyInter myInter;
    cout << myInter << endl;    // 0
    cout << myInter++ << endl;  // 0
    cout << myInter << endl;    // 1
}

int main() {
    // 调用函数
    test02();
    return 0;
}