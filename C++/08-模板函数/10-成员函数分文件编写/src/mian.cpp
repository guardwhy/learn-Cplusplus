/*
 * mian.cpp
 *  Created on: 2020年9月4日
 *  Author: guardwhy
 */
#include <iostream>
#include <cstring>
#include "person.hpp"
using namespace std;

int main(){
	// 创建对象
	Person<string, int> p1("curry", 10);
	p1.display();
	return 0;
}


