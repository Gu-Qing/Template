#include <iostream>
//#include "student.h" //���ļ���дʱ��ɨ�費�������б���
//#include "student.cpp" //���п��Գɹ�����һ�㲻����ô��
#include "student.hpp"
using namespace std;

/*
* ���⣺��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
* �����ʽ��
* 1.ֱ�Ӱ���.cppԴ�ļ�
* 2.��������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��
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

	Student<string, int> s("����", 20);
	s.show();

	system("pause");

	return 0;
}