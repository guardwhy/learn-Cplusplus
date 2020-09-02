#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "myString.h"

// 重载运算符
void Operator01() {
	// 创建字符串对象
	MyString str1 = "abc";
	MyString str2 = str1;
	// 输出结果
	cout << "str1=" << str1 << endl;
	cout << "str2=" << str2 << endl;
	cout << "请重新给str1赋值:" << endl;
	// 输入操作
	cin >> str1;
	cout << "str1最新的值为: " << str1 << endl;
}

// 赋值运算符
void Operator02() {
	// 定义字符串对象
	MyString str3 = "abcef";
	MyString str4 = "guardwhy";
	MyString str5 = str3 + str4;
	MyString str6 = str5 + "why";

	// 输出结果
	cout << "str5的值:" << str5 << endl;
	cout << "str6的值:" << str6 << endl;

	cout << "str5[0]=" << str5[0] << endl;
	str5[0] = 'z';
	cout << "str5[0]=" << str5[0] << endl;

	// 条件判断
	if (str5 == str6) {
		cout << "str5 == str6" << endl;
	}
	else {
		cout << "str5 != str6" << endl;
	}

	// 定义字符串变量
	MyString str7 = "zbcdef";
	if (str5 == str7) {
		cout << "str5 == str7" << endl;
	}
	else {
		cout << "str5 != str7" << endl;
	}
}

int main() {
	// 调用函数
	Operator01();
	Operator02();
	return 0;
}