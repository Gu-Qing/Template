#include <iostream>
using namespace std;

//��ģ���г�Ա�����ڵ���ʱ�Ŵ���

class Person1 {
public :
	void showPerson1() {
		cout << "Person 1" << endl;
	}
};

class Person2 {
public:
	void showPerson1() {
		cout << "Person 2" << endl;
	}
};

template <class T>
class MyClass {
public :
	T obj;

	//��ģ���еĳ�Ա���������Ա���ɹ���֤����Ա����δ����ʱ������
	void func1() {
		obj.showPerson1();
	}
	void func2() {
		obj.showPerson2();
	}
};

int test09() {

	MyClass<Person1> p1;
	p1.func1();
	//p1.func2(); //�ᱨ��

	system("pause");

	return 0;
}