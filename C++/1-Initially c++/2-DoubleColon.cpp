#include <iostream>
/**
 * ˫ð���������������
 */
using namespace std;
// ����ȫ�ֱ���
int a = 100;

// ��������
void test01()
{
    // ����ֲ�����
    int a = 200;
    cout << "�ֲ�����:" << a << endl;
    // ���::ǰ��û���κ�����,��ʾ����ȫ��������
    cout << "ȫ�ֱ���:" << ::a << endl;
}

int main() {
    // ���ú���
    test01();
    return 0;
}