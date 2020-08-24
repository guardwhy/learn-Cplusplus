#include <iostream>
/**
 * ָ�������
 */
using namespace std;

// ����Person�ṹ������
struct Person{
    // ����
    string name;
    // ����
    int age;
};

// ��ͳ����
void mallocMethod(Person ** person){
    // �����ڴ�ռ�
    Person *p = (Person *)malloc(sizeof(Person));
    p->age = 21;
    p->name = "Curry";
    *person = p;
}

// ���ú���
void test01(){
    // ��ʼ��
    Person *p = NULL;
    mallocMethod(&p);
    // ������
    // cout << "������:"<< p->name <<endl << "������:"<< p->age << endl;
    cout << "p�����䣺 " << p->age << endl;
    cout << "p�������� " << p->name << endl;
}

// ָ������
void mallocMethods(Person * &p){
    // �����ڴ�ռ�
    p = (Person *)malloc(sizeof(Person));
    p->age = 22;
    p->name = "kobe";
}

// �ͷŷ���
void freeMethods(Person * &p){
    free(p);
    p = NULL;
}

// ���ú���
void test02(){
    // ��ʼ��
    Person *p = NULL;
    mallocMethods(p);
    // ������
    cout << "p�����䣺 " << p->age << endl;
    cout << "p�������� " << p->name << endl;

    // ����freeMethods()
    freeMethods(p);
}
int main() {
    // ���ú���
    // test01();
    test02();
    return 0;
}