/*
 * person.hpp
 *  Created on: 2020年9月4日
 *  Author: guardwhy
 */
#include <iostream>
using namespace std;

// 基类:Person
template<class T1, class T2>
class Person{
public:
	// 成员变量
	T1 m_Name;
	T2 m_Age;
public:
	// 构造函数
	Person(T1 name, T2 age);
	// 成员函数
	void display();
};

// 构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age){
	this->m_Name = "curry";
	this->m_Age = 10;
}

template<class T1, class T2>
void Person<T1, T2>::display(){
	cout << "姓名是:"<< this->m_Name << ", 年龄:"<< this->m_Age << endl;
}




