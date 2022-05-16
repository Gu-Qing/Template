#include <iostream>
using namespace std;

template<class T1, class T2>
class Per1 {
public :
	T1 m_Name;
	T2 m_Age;

	Per1(T1 name, T2 age);

	void show();
};

//���캯������ʵ��
template<class T1, class T2>
Per1<T1, T2>::Per1(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}

//��Ա����������ʵ��
template<class T1, class T2>
void Per1<T1, T2>::show() {
	cout << "Name: " << this->m_Name << " Age: " << this->m_Age << endl;
}

int test12() {

	Per1<string, int> p("����", 18);
	p.show();

	system("pause");

	return 0;
}