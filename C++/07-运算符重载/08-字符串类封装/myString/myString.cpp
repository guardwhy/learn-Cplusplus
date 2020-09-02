#include "myString.h"
#include <cstring>

// 重载<< 运算符
ostream& operator<<(ostream& cout, MyString& str) {
	// 输出结果
	cout << str.pString;
	return cout;
}

// 重载 >> 运算符
istream& operator>>(istream& cin, MyString& str) {
	// 先判断原来的字符串,如果存在就释放
	if (str.pString != NULL) {
		// 释放内存
		delete[] str.pString;
		str.pString = NULL;
	}

	// 字符数组
	char buf[1024];
	// 输入数组
	cin >> buf;

	str.pString = new char[strlen(buf) + 1];
	// 拷贝复制
	strcpy(str.pString, buf);
	// 更新字符数组长度
	str.m_Size = strlen(buf);
	return cin;
}

// 有参构造
MyString::MyString(const char* str) {
	// 开辟堆空间
	this->pString = new char[strlen(str) + 1];
	// 赋值
	strcpy(this->pString, str);
	// 更新字符串的长度
	this->m_Size = strlen(str);
}

// 拷贝构造
MyString::MyString(const MyString& str) {
	// 开辟堆空间
	this->pString = new char[strlen(str.pString) + 1];
	// 赋值操作
	strcpy(this->pString, str.pString);
	// 更新字符串的长度
	this->m_Size = strlen(str.pString);
}

// 赋值运算符
MyString& MyString::operator=(const char* str) {
	//先判断原来的字符串,如果存在就释放
	if (this->pString != NULL) {
		delete[] this->pString;
		this->pString = NULL;
	}
	// 堆内存分配
	this->pString = new char[strlen(str) + 1];
	// 拷贝构造
	strcpy(this->pString, str);
	// 更改字符串的长度
	this->m_Size = strlen(str);
	// 返回自身
	return *this;
}

// 赋值运算符
MyString& MyString::operator=(const MyString& str) {
	//先判断原来的字符串,如果存在就释放
	if (this->pString != NULL) {
		// 释放内存
		delete[] this->pString;
		this->pString = NULL;
	}
	// 堆内存分配
	this->pString = new char[strlen(str.pString) + 1];
	// 拷贝构造
	strcpy(this->pString, str.pString);
	// 更改字符串的长度
	this->m_Size = strlen(str.pString);
	// 返回自身
	return *this;
}

// 加号运算符
MyString MyString::operator+(const char* str) {
	// 新字符串长度
	int newSize = this->m_Size + strlen(str) + 1;
	// 临时空间
	char* temp = new char[newSize];
	// 初始化函数
	memset(temp, 0, newSize);
	// 字符串拼接
	strcat(temp, this->pString);
	strcat(temp, str);

	MyString newString = temp;
	// 释放临时空间
	delete[] temp;
	// 返回新的字符串
	return newString;
}

// 加号运算符
MyString MyString::operator+(const MyString& str) {
	// 新字符串长度
	int newSize = this->m_Size + strlen(str.pString) + 1;
	// 临时空间
	char* temp = new char[newSize];
	// 初始化函数
	memset(temp, 0, newSize);
	// 字符串拼接
	strcat(temp, this->pString);

	MyString newString = temp;
	// 释放临时空间
	delete[] temp;
	// 返回新的字符串
	return newString;
}

// []运算符
char& MyString::operator[](int pos) {
	return this->pString[pos];
}

// bool类型值
bool MyString::operator==(const char* str) {
	// 条件判断
	if (strcmp(this->pString, str) == 0) {
		return true;
	}
	return false;
}

// bool类型值
bool MyString:: operator==(const MyString& str) {
	return strcmp(this->pString, str.pString) == 0;
}

// 析构函数
MyString::~MyString() {
	//　条件判断
	if (this->pString != NULL) {
		// 释放内存
		delete[] this->pString;
		this->pString = NULL;
	}
}