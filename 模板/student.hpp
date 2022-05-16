#pragma once
#include <iostream>
using namespace std;

template <class T1, class T2>
class Student {
public:
	T1 m_Name;
	T2 m_Age;
	Student(T1 name, T2 age);
	void show();
};

template <class T1, class T2>
Student<T1, T2>::Student(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}

template <class T1, class T2>
void Student<T1, T2>::show() {
	cout << "Name: " << this->m_Name << " Age: " << this->m_Age << endl;
}