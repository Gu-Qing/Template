#include <iostream>
#include <string>
using namespace std;

/*
* ģ��ľ�����
* ģ�岻�����ܵģ���Щ�ض����ݽṹ����Ҫ���廯��ʽ������ʵ��
* 
* ���þ��廯ģ�壬���Խ���Զ������͵�ͨ�û�
* ѧϰģ�岢����Ϊ��дģ�壬������STL�ܹ�����ϵͳ�ṩ��ģ��
*/

class Person {
public :
	string name;
	int age;

	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

//�Ա����������Ƿ���ȵĺ���
template <typename T>
bool myCompare(T& a, T& b) {
	return a == b ? true : false;
}
//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person& p1, Person& p2) {
	if (p1.name == p2.name && p1.age == p2.age) {
		return true;
	}
	else {
		return false;
	}
}

void test006() {
	int a = 10, b = 20, c = 10;
	bool ret = myCompare(a, b);
	cout << (ret ? "a == b" : "a != b") << endl;

	//�Զ������ͶԱ�
	Person p1 ("Tom", 10);
	Person p2 ("Tom", 10);
	ret = myCompare(p1, p2); //���������ᱨ��
	cout << (ret ? "p1 == p2" : "p1 != p2") << endl;
}

int test06() {

	test006();

	system("pause");

	return 0;
}