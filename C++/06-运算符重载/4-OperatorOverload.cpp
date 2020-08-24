#include <iostream>
/**
 * ָ�����������
 */
using namespace std;

// ����Person
class Person{
public:
    // ��Ա����
    int m_Age;
   // ���ι���
   Person(int age){
       cout << "Person���캯������" << endl;
       this->m_Age = age;
   }

   // ����showAge()����
   void showAge(){
       cout << "m_Age=" << this->m_Age << endl;
   }

   // ��������
   ~Person(){
       cout<< "Person��������������" << endl;
   }
};

// ����ָ��
class smartPointer{
public:
    // ����ָ�����
    Person * m_Person;
    // ���캯��
    smartPointer(Person *p){
        this->m_Person = p;
        cout << "smartPointer���캯������"<<endl;
    }
    // ����->�����
    Person * operator->(){
        return this->m_Person;
    }

    // ����* �����
    Person& operator*(){
        return *this->m_Person;
    }

    ~smartPointer(){
        cout << "smartPointer������������" << endl;
        // �����ж�
        if(this->m_Person!=NULL){
            delete this->m_Person;
            this->m_Person = NULL;
        }
    }
};
int main() {
    // ��������
    smartPointer sm(new Person(172));
    // ����ָ�� �����й�new�����Ķ��󣬴����õĶ������� ����дdelete
    sm->showAge();
    (*sm).showAge();
    return 0;
}