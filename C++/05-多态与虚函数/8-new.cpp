#include <iostream>
/**
 * ����new�ڶ�����������
 */
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person��Ĭ�Ϲ��캯������" << endl;
    }

    Person(int a )
    {
        cout << "Person���вι��캯������" << endl;
    }

    Person(const Person & p)
    {
        cout << "Person�Ŀ������캯������" << endl;
    }

    ~Person()
    {
        cout << "Person��������������" << endl;
    }
};

int main() {
    // �����������
    int * intArray = new int[10];
    char * charArray =  new char[100];

    //�������new�ڶ������� �Զ����������ݵ����飬������Ĭ�Ϲ��캯��
    Person * personArray = new Person[3];

    delete [] personArray;

    //�����ջ�Ͽ������飬����û��Ĭ�Ϲ��캯��
    //Person pArray[2] = { Person(1), Person(2) };
    //delete personArray;
    return 0;
}