#include <iostream>
/**
 * ��������:���õ������汾��������const�Ͳ���const������
 */
using namespace std;

// ��������
void myFunction(int & a){
    cout << "myFunction(int &a)�ĵ���" << endl;
}

void myFunction(const int & a){
    cout << "myFunction(const int &a)�ĵ���"<< endl;
}

void test(){
    // myFunction(10);  // myFunction(const int &a)�ĵ���

    int a = 10;
    myFunction(a); // myFunction(int &a)�ĵ���
}

int main() {
    cout << "Hello, World!" << endl;
    // ���ú���
    test();
    return 0;
}