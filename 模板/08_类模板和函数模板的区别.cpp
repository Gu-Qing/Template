#include <iostream>
using namespace std;

/*
* ��ģ���뺯��ģ����Ҫ����
* 1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
* 2.��ģ���ں���ģ������б��п�����Ĭ�ϲ���
*/

template<class NameType, class AgeType = int> //Ĭ�ϲ���������������֮��ʹ�õ�ʱ��Ϳ��Բ�д
class Person {
public :
	NameType m_Name;
	AgeType m_Age;
	Person(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void show() {
		cout << "Name: " << this->m_Name << ", Age: " << this->m_Age << endl;
	}
};

int test08() {

	//Person p("Lisi", 222); //�޷�ʹ�ã��ᱨ�������Զ��Ƶ�����
	Person<string, int> p1("����", 1); //ֻ����ʽָ������
	Person<string> p2("����", 18);
	Person<string, string> p3("����", "Lisi");
	p1.show();
	p2.show();
	p3.show();

	system("pause");

	return 0;
}