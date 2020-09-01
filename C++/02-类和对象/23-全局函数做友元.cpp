#include <iostream>
#include <string>
using namespace std;
/**
 * 全局函数做友元
 * @return
*/
class House{
    friend void Friends(House & house);
public:
    string Parlour;
private:
    string bedRoom;
public:
    // 无参构造
    House(){
        Parlour = "客厅";
        bedRoom = "卧室";
    }
};

// 全局函数
void Friends(House & house){
    // 输出结果
    cout <<"好朋友在客厅"<< house.Parlour << endl;
    cout <<"好朋友在卧室"<< house.bedRoom << endl;
}
int main() {
    // 创建对象
    House house;
    Friends(house);
    return 0;
}