#include <iostream>
/**
 * const��C++�·����ڴ�����
 */
using namespace std;
// 1.��const���εľֲ�����ȡ��ַ,�������ʱ�ռ�
void test01(){
    // 01.�������
    const int const_A = 10;
    int *p = (int *)&const_A;
}

// 2.ʹ�ñ�������ʼ��const���εľֲ�����
void test02(){
    // �������
    int a = 10;
    // ������ڴ�,����ͨ������޸�,�޸ĳɹ�.
    const int const_B = a;

    int * p = (int *)&const_B;
    *p = 30;
    // ������
    cout << "const_B��ֵ:" << const_B << endl;
}

// 3.�����Զ����������ͣ�Ҳ������ڴ�
struct Person{
    // �������
    string name;
    int age;
};

// ��������
void test03(){
    // �޲ι���
    const Person p1{};
    Person * p = (Person *)&p1;
    p->age = 18;
    p->name = "��ɽ������";

    // ������
    cout << "����:" << p->name <<endl<<"����:" << p->age << endl;
}
int main() {
    // 1.���ú���
    // test02();
    test03();
    return 0;
}