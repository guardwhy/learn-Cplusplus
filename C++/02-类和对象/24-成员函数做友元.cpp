#include <iostream>
using namespace std;
/**
 * 类中的成员函数做友元
 * @return
*/

class House;
// 创建Friends类
class Friends{
public:
    // 声明构造函数
    Friends();
    // 声明成员函数
    void visit01();

    House *house;
};

// 创建House类
class House{
    friend void Friends::visit01();
public:
    string Parlour;
    // 声明构造函数
    House();
private:
    string bedRoom;
};

// 定义构造函数
House::House() {
    Parlour = "客厅";
    bedRoom = "卧室";

}

// 定义构造函数
Friends::Friends() {
    house = new House;
}

// 定义成员函数
void Friends::visit01() {
    cout<< "好朋友正在访问客厅:" << house->Parlour << endl;
    cout<< "好朋友正在访问卧室:" << house->bedRoom << endl;
}

int main() {
    // 创建对象
    Friends s1;
    s1.visit01();
    return 0;
}