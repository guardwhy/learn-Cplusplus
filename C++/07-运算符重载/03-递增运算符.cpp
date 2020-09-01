#include <iostream>
using namespace std;
/**
 * 递增运算符
 * @return
*/
// 基类:MyInter
class MyInter{
    // 友元函数
    friend ostream& operator<<(ostream & cout, MyInter myInter);
    // 成员变量
private:
    int num;
public:
    // 成员函数
    MyInter(){
        num = 0;
    }
    //重载前置递增运算符
    MyInter& operator++(){
        // 先++
        num++;
        // 返回自身
        return *this;
    }
    //重载后置递增运算符
    MyInter operator++(int ){
        // 先记录原来的值
        MyInter temp = *this;
        // 在执行
        num ++;
        // 将记录的值返回
        return temp;
    }
};

// 全局函数重载
ostream& operator<<(ostream & cout, MyInter myInter){
    cout << myInter.num;
    return cout;
}

// 定义前置递增
void preFunction(){
    // 创建对象
    MyInter myInter;
    // 输出结果
    cout <<"起始值:"<< myInter << endl;
    cout <<"前置递增:"<< ++(++myInter) << endl;
    cout <<"最终值:"<< myInter << endl;
}

// 定义后置递增
void PotFunction(){
    // 创建对象
    MyInter myInter;
    // 输出结果
    cout <<"起始值:"<< myInter << endl;
    cout <<"后置递增:"<< myInter++ << endl;
    cout <<"最终值:"<< myInter;
}

int main() {
    // 声明前置递增
    preFunction();
    cout << "++++++++++++++++"<< endl;
    PotFunction();
    return 0;
}