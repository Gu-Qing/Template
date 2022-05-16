#include <iostream>
//#include "student.h" //分文件编写时会扫描不到，运行报错
//#include "student.cpp" //运行可以成功，但一般不会这么做
#include "student.hpp"
using namespace std;

/*
* 问题：类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
* 解决方式：
* 1.直接包含.cpp源文件
* 2.将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制
*/

//template <class T1, class T2>
//class Student {
//public :
//	T1 m_Name;
//	T2 m_Age;
//	Student(T1 name, T2 age);
//	void show();
//};
//template <class T1, class T2>
//Student<T1, T2>::Student(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template <class T1, class T2>
//void Student<T1, T2>::show() {
//	cout << "Name: " << this->m_Name << " Age: " << this->m_Age << endl;
//}

int test13() {

	Student<string, int> s("张三", 20);
	s.show();

	system("pause");

	return 0;
}