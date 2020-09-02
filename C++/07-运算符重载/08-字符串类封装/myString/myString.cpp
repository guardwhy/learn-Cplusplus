#include "myString.h"
#include <cstring>

// ����<< �����
ostream& operator<<(ostream& cout, MyString& str) {
	// ������
	cout << str.pString;
	return cout;
}

// ���� >> �����
istream& operator>>(istream& cin, MyString& str) {
	// ���ж�ԭ�����ַ���,������ھ��ͷ�
	if (str.pString != NULL) {
		// �ͷ��ڴ�
		delete[] str.pString;
		str.pString = NULL;
	}

	// �ַ�����
	char buf[1024];
	// ��������
	cin >> buf;

	str.pString = new char[strlen(buf) + 1];
	// ��������
	strcpy(str.pString, buf);
	// �����ַ����鳤��
	str.m_Size = strlen(buf);
	return cin;
}

// �вι���
MyString::MyString(const char* str) {
	// ���ٶѿռ�
	this->pString = new char[strlen(str) + 1];
	// ��ֵ
	strcpy(this->pString, str);
	// �����ַ����ĳ���
	this->m_Size = strlen(str);
}

// ��������
MyString::MyString(const MyString& str) {
	// ���ٶѿռ�
	this->pString = new char[strlen(str.pString) + 1];
	// ��ֵ����
	strcpy(this->pString, str.pString);
	// �����ַ����ĳ���
	this->m_Size = strlen(str.pString);
}

// ��ֵ�����
MyString& MyString::operator=(const char* str) {
	//���ж�ԭ�����ַ���,������ھ��ͷ�
	if (this->pString != NULL) {
		delete[] this->pString;
		this->pString = NULL;
	}
	// ���ڴ����
	this->pString = new char[strlen(str) + 1];
	// ��������
	strcpy(this->pString, str);
	// �����ַ����ĳ���
	this->m_Size = strlen(str);
	// ��������
	return *this;
}

// ��ֵ�����
MyString& MyString::operator=(const MyString& str) {
	//���ж�ԭ�����ַ���,������ھ��ͷ�
	if (this->pString != NULL) {
		// �ͷ��ڴ�
		delete[] this->pString;
		this->pString = NULL;
	}
	// ���ڴ����
	this->pString = new char[strlen(str.pString) + 1];
	// ��������
	strcpy(this->pString, str.pString);
	// �����ַ����ĳ���
	this->m_Size = strlen(str.pString);
	// ��������
	return *this;
}

// �Ӻ������
MyString MyString::operator+(const char* str) {
	// ���ַ�������
	int newSize = this->m_Size + strlen(str) + 1;
	// ��ʱ�ռ�
	char* temp = new char[newSize];
	// ��ʼ������
	memset(temp, 0, newSize);
	// �ַ���ƴ��
	strcat(temp, this->pString);
	strcat(temp, str);

	MyString newString = temp;
	// �ͷ���ʱ�ռ�
	delete[] temp;
	// �����µ��ַ���
	return newString;
}

// �Ӻ������
MyString MyString::operator+(const MyString& str) {
	// ���ַ�������
	int newSize = this->m_Size + strlen(str.pString) + 1;
	// ��ʱ�ռ�
	char* temp = new char[newSize];
	// ��ʼ������
	memset(temp, 0, newSize);
	// �ַ���ƴ��
	strcat(temp, this->pString);

	MyString newString = temp;
	// �ͷ���ʱ�ռ�
	delete[] temp;
	// �����µ��ַ���
	return newString;
}

// []�����
char& MyString::operator[](int pos) {
	return this->pString[pos];
}

// bool����ֵ
bool MyString::operator==(const char* str) {
	// �����ж�
	if (strcmp(this->pString, str) == 0) {
		return true;
	}
	return false;
}

// bool����ֵ
bool MyString:: operator==(const MyString& str) {
	return strcmp(this->pString, str.pString) == 0;
}

// ��������
MyString::~MyString() {
	//�������ж�
	if (this->pString != NULL) {
		// �ͷ��ڴ�
		delete[] this->pString;
		this->pString = NULL;
	}
}