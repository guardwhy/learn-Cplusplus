#include <iostream>
/**
 * 利用new在堆区开辟数组
 */
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(int a )
    {
        cout << "Person的有参构造函数调用" << endl;
    }

    Person(const Person & p)
    {
        cout << "Person的拷贝构造函数调用" << endl;
    }

    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }
};

int main() {
    // 创建数组对象
    int * intArray = new int[10];
    char * charArray =  new char[100];

    //如果利用new在堆区开辟 自定义类型数据的数组，必须有默认构造函数
    Person * personArray = new Person[3];

    delete [] personArray;

    //如果在栈上开辟数组，可以没有默认构造函数
    //Person pArray[2] = { Person(1), Person(2) };
    //delete personArray;
    return 0;
}