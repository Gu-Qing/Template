#include <iostream>
#include <string>
using namespace std;

/*
* ȫ�ֺ�������ʵ�֡���ֱ��������������Ԫ����
* ȫ�ֺ�������ʵ�֡�����Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
*/

//������
template <class T1, class T2>
class Teacher;

//����ģ���ʵ��
template <class T1, class T2>
void printTeacher2(Teacher<T1, T2> t) {
	cout << "����ʵ�֣�" << endl;
	cout << "Name: " << t.m_Name << " Age: " << t.m_Age << endl;
}

template <class T1, class T2>
class Teacher {
	//ȫ�ֺ��� ����ʵ��
	friend void printTeacher(Teacher<T1, T2> t) {
		cout << "Name: " << t.m_Name << " Age: " << t.m_Age << endl;
	}

	//ȫ�ֺ��� ����ʵ��(��ͨ����������)
	//friend void printTeacher2(Teacher<T1, T2> t);
	//�����ȫ�ֺ�������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ��ڣ���ʵ����ǰ�����Ϸ����ٶ��������ࣩ
	friend void printTeacher2<>(Teacher<T1, T2> t);

private :
	T1 m_Name;
	T2 m_Age;

public :

	Teacher(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
};

//����ģ���ʵ��
//template <class T1, class T2>
//void printTeacher2(Teacher<T1, T2> t) {
//	cout << "����ʵ�֣�" << endl;
//	cout << "Name: " << t.m_Name << " Age: " << t.m_Age << endl;
//}

int test14() {

	//ȫ�ֺ�������ʵ�ֲ���
	Teacher<string, int> p("Tom", 20);
	printTeacher(p);

	//ȫ�ֺ�������ʵ�ֲ���
	Teacher<string, int> p1("Marry", 18);
	printTeacher2(p1);

	system("pause");

	return 0;
}