#include <iostream>
/**
 * �������أ�C++��������������ͬ
 * ����������
    1������ͬ���������¡�2������������ͬ��3�������ĸ�����ͬ,�������Ͳ�ͬ ����˳��ͬ
 */
using namespace std;

// ��������
void function()
{
    cout << "function()����" << endl;
}

void function(int a)
{
    cout << "function(int a)����" << endl;
}

void function(int a, double b)
{
    cout << "function(int a, double b)����" << endl;
}

void test(){
    function(3.23, 10);
}

int main() {
    cout << "Hello, World!" << endl;
    // ���ú���
    test();
    return 0;
}