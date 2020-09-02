#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ����:MyString
class MyString {
	// ��Ԫ����
	friend ostream& operator<<(ostream& cout, MyString& str);
	friend istream& operator>>(istream& cin, MyString& str);
private:
	char* pString; // ������������
	int m_Size; // �ַ�������
public:
	// �вι���
	MyString(const char* str);
	// ��������
	MyString(const MyString& str);

	// ����=�����
	MyString& operator=(const char* str); // ��ֵ����:str= "guardwhy"
	MyString& operator=(const MyString& str);

	// ����+�����
	MyString operator+(const char* str);
	MyString operator+(const MyString& str);

	// ����[]�����
	char& operator[](int pos);

	// ����==
	bool operator==(const char* str);
	bool operator==(const MyString& str);

	// ��������
	~MyString();
};