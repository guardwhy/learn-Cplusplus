#include <iostream>
/**
 * ����������
 */
using namespace std;

//��const�����βΣ�Ϊ�˷�ֹ�ڴ�������������޸�����
void constValue( const int &a){
    // ���a�Ĵ�С
    cout << "a�Ĵ�С��:" << a << endl;
}

// ��������
void test01(){
    // �������
    int a = 200;
    constValue(a);
}
int main() {
    cout << "Hello, World!" << endl;
    // ���ú���
    test01();
    return 0;
}