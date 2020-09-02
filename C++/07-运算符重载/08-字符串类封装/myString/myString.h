#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 基类:MyString
class MyString {
	// 友元函数
	friend ostream& operator<<(ostream& cout, MyString& str);
	friend istream& operator>>(istream& cin, MyString& str);
private:
	char* pString; // 堆区开辟数组
	int m_Size; // 字符串长度
public:
	// 有参构造
	MyString(const char* str);
	// 拷贝构造
	MyString(const MyString& str);

	// 重载=运算符
	MyString& operator=(const char* str); // 赋值操作:str= "guardwhy"
	MyString& operator=(const MyString& str);

	// 重载+运算符
	MyString operator+(const char* str);
	MyString operator+(const MyString& str);

	// 重载[]运算符
	char& operator[](int pos);

	// 重载==
	bool operator==(const char* str);
	bool operator==(const MyString& str);

	// 析构函数
	~MyString();
};