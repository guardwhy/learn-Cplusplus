#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "myString.h"

// ���������
void Operator01() {
	// �����ַ�������
	MyString str1 = "abc";
	MyString str2 = str1;
	// ������
	cout << "str1=" << str1 << endl;
	cout << "str2=" << str2 << endl;
	cout << "�����¸�str1��ֵ:" << endl;
	// �������
	cin >> str1;
	cout << "str1���µ�ֵΪ: " << str1 << endl;
}

// ��ֵ�����
void Operator02() {
	// �����ַ�������
	MyString str3 = "abcef";
	MyString str4 = "guardwhy";
	MyString str5 = str3 + str4;
	MyString str6 = str5 + "why";

	// ������
	cout << "str5��ֵ:" << str5 << endl;
	cout << "str6��ֵ:" << str6 << endl;

	cout << "str5[0]=" << str5[0] << endl;
	str5[0] = 'z';
	cout << "str5[0]=" << str5[0] << endl;

	// �����ж�
	if (str5 == str6) {
		cout << "str5 == str6" << endl;
	}
	else {
		cout << "str5 != str6" << endl;
	}

	// �����ַ�������
	MyString str7 = "zbcdef";
	if (str5 == str7) {
		cout << "str5 == str7" << endl;
	}
	else {
		cout << "str5 != str7" << endl;
	}
}

int main() {
	// ���ú���
	Operator01();
	Operator02();
	return 0;
}