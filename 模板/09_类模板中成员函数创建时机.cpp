#include <iostream>
using namespace std;

//类模板中成员函数在调用时才创建

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

	//类模板中的成员函数。可以编译成功，证明成员函数未调用时不创建
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
	//p1.func2(); //会报错

	system("pause");

	return 0;
}