#include <iostream>
#include <string>
using namespace std;

/*
* ���ִ��뷽ʽ��
* 1.ָ����������͡���ֱ����ʾ�������������		���
* 2.����ģ�廯�����������еĲ�����Ϊģ����д���
* 3.������ģ�廯����������������� ģ�廯���д���
*/
template <class T1, class T2>
class Person {
public :
	T1 m_Name;
	T2 m_Age;

	Person(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void show() {
		cout << "Name: " << this->m_Name << ", Age: " << this->m_Age << endl;
	}
};

//1.ָ����������
void printPerson1(Person<string, int>& p) {
	p.show();
}
void test0010() {
	Person <string, int> p("���", 999);
	printPerson1(p);
}

//2.����ģ�廯
template <class T1, class T2>
void printPerson2(Person<T1, T2>& p) {
	p.show();
	cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2 ������Ϊ��" << typeid(T2).name() << endl;
}
void test0110() {
	Person <string, int> p("�˽�", 999);
	printPerson2(p);
}

//������ģ�廯
template <class T>
void printPerson3(T& p) {
	p.show();
	cout << "T ������Ϊ��" << typeid(T).name() << endl;
}
void test0210() {
	Person <string, int> p("ɳɮ", 999);
	printPerson3(p);
}

int test10() {

	test0010();
	test0110();
	test0210();

	system("pause");

	return 0;
}