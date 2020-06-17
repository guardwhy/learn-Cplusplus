#include <iostream>
#include <cstring>
/**
 ��ֵ���������:��������Ĭ�ϸ�һ�������4������
 ���캯������ʵ�֣�  ������������ʵ�֣� �������죨ֵ������ operator= (ֵ����)
 */
using namespace std;

// ����Person��
class Person{
public:
    //��Ա����
    char * m_Name;
    // ���캯��
    Person(){
        cout << "PersonĬ�Ϲ��캯������"<< endl;
    }

    // ���ι���
    Person(const char * name){
        cout << "Person�вι��캯������" << endl;
        this->m_Name = new char[strlen(name) + 1];
        strcpy(this->m_Name, name);
    }

    // ��������
    Person(const Person & p){
        cout << "Person�������캯������" << endl;
        this->m_Name = new char[strlen(p.m_Name) + 1];
        strcpy(this->m_Name, p.m_Name);
    }

    // ���ظ�ֵ�����
    Person& operator=(const Person & p){
        // 1.���ж϶����Ƿ�������,����о����ͷŸɾ���
        if(this->m_Name != NULL){
            delete [] this->m_Name;
            this->m_Name = NULL;
        }
        // ���
        this->m_Name = new char[strlen(p.m_Name) + 1];
        strcpy(this->m_Name, p.m_Name);
        // ���ر���
        return *this;
    }

    // ��������
    ~Person(){
        cout << "Person������������" << endl;
        if(this->m_Name != NULL){
            delete [] this->m_Name;
            this->m_Name = NULL;
        }
    }
};

// ��������
void test01(){
    // 1.��������
    Person p1("kobe");
    Person p2("Curry");

    Person p3;
    // ��ֵ����
    p3 = p1 = p2;

    cout << "P1��������:" << p1.m_Name << endl;
    cout << "P2��������:" << p2.m_Name << endl;
    cout << "P3��������:" << p3.m_Name << endl;
}
int main() {
    // ���ú���
    test01();
    return 0;
}