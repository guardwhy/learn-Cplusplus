#include <iostream>
/**
 * �������ݷ�ʽ
 */
using namespace std;

// 1.��ַ����
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    Swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

// 2.���ô���
void Swap01(int &a ,int &b )
{
    int temp = a;
    a = b;
    b = temp;
}

void test02()
{
    int a = 10;
    int b = 20;
    Swap01(a, b);
    cout << "a = " << a << endl; // 20
    cout << "b = " << b << endl; // 10
}

// 3.����������ֵ�����õ�ʱ��,�����ĵ��ÿ�����Ϊ��ֵ����
int& function(){
    // ���徲̬����
    static int a = 10;
    return a;
}

void test03(){
    int &ref = function();
    // ������
    cout << "ref��ֵ��:" << ref << endl;
    cout << "ref��ֵ��:" << ref << endl;
    cout << "ref��ֵ��:" << ref << endl;


    //����������ֵ������ʱ����ô�����ĵ��ÿ�����Ϊ��ֵ����
    function() = 200;
    cout << "------------------" << endl;
    cout << "ref��ֵ��:" << ref << endl;
}

int main() {
    cout << "Hello, World!" << endl;

    // ���ú���
    // test01();
    // test02();
    test03();
    return 0;
}