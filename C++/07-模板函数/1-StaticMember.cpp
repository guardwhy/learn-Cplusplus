#include <iostream>
/**
 * ��̬��Ա����
    1�����ж��󶼹���ͬһ�ݾ�̬��Ա��
    2���ڱ���׶ξͷ������ڴ档
    3�����������������������ʼ����
 */
using namespace std;

// ����Person��
class Person{
public:
    // ���徲̬����
    static int a;

private:
    static int b; // ˽�о�̬��Ա����
};

// ��̬��Ա���������ʼ��
int Person::a = 100;
int Person::b = 200;

//1.��̬���������﷨
void test01(){
    // ��������p
    Person p;
    cout << "a��ֵ��:" << p.a << endl;

    // ��������pe
    Person pe;
    p.a = 200;
    cout << "a��ֵ��:" << pe.a << endl;
}

// 2.��̬��Ա�������ʷ�ʽ
void test02(){
    // 2.1 ͨ���������
    Person p;
    cout << "a��ֵ��:"<< p.a << endl;
    // 2.2 ͨ����������
    cout << "a��ֵ��:" << Person::a << endl;
}

void test03(){
    // ��������
    Person p1;
    // ������
    cout << "��̬����a��ֵ��:" << p1.a << endl;
    // ˽��Ȩ�޵�b�����ⲻ���Ա�����.
    // cout << "˽�о�̬����b��ֵ:" << p1.b << endl;
}

int main() {
    // ���ú���
    // test01();
    // test02();
    test03();
    return 0;
}