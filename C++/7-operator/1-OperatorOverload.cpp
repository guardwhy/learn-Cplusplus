#include <iostream>
/**
 * �Ӻ����������
 */
using namespace std;
// ����Person��
class Person{
public:
    // �����Ա����
    int m_A;
    int m_B;
    // ���캯��
    Person(){};

    // ���ι���
    Person(int a, int b):m_A(a), m_B(b){};

    /**
     * ��Ա��������+�����
     */

     /*Person operator+(Person & p){
         // ������ʱ����
         Person temp;
         temp.m_A = this->m_A + p.m_A;
         temp.m_B = this->m_B + p.m_B;
         return temp;
     }
     */
};

// ͨ��ȫ�ֺ���ʵ�ּӺ����������
Person operator+(Person &p1, Person &p2){
    // ������ʱ����
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p2.m_B + p2.m_B;
    return temp;
}

int main() {
    // �������󣬵��ú���
    Person p1(10,10);
    Person p2(10,10);
    Person p3 = p1 + p2;
    // ������
    cout << "p3��m_A=" << p3.m_A <<endl <<"p3��m_B="<< p3.m_B << endl;
    return 0;
}