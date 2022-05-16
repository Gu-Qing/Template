#include <iostream>
#include <string>
using namespace std;

/*
* 三种传入方式：
* 1.指定传入的类型——直接显示对象的数据类型		最常用
* 2.参数模板化——将对象中的参数变为模板进行传递
* 3.整个类模板化——将这个对象类型 模板化进行传递
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

//1.指定传入类型
void printPerson1(Person<string, int>& p) {
	p.show();
}
void test0010() {
	Person <string, int> p("孙猴", 999);
	printPerson1(p);
}

//2.参数模板化
template <class T1, class T2>
void printPerson2(Person<T1, T2>& p) {
	p.show();
	cout << "T1 的类型为：" << typeid(T1).name() << endl;
	cout << "T2 的类型为：" << typeid(T2).name() << endl;
}
void test0110() {
	Person <string, int> p("八戒", 999);
	printPerson2(p);
}

//整个类模板化
template <class T>
void printPerson3(T& p) {
	p.show();
	cout << "T 的类型为：" << typeid(T).name() << endl;
}
void test0210() {
	Person <string, int> p("沙僧", 999);
	printPerson3(p);
}

int test10() {

	test0010();
	test0110();
	test0210();

	system("pause");

	return 0;
}