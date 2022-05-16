#include <iostream>
using namespace std;

/*
* 类模板与函数模板主要区别：
* 1.类模板没有自动类型推导的使用方式
* 2.类模板在函数模板参数列表中可以有默认参数
*/

template<class NameType, class AgeType = int> //默认参数，这里声明了之后使用的时候就可以不写
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

	//Person p("Lisi", 222); //无法使用，会报错，不能自动推导类型
	Person<string, int> p1("张三", 1); //只能显式指定类型
	Person<string> p2("李四", 18);
	Person<string, string> p3("李四", "Lisi");
	p1.show();
	p2.show();
	p3.show();

	system("pause");

	return 0;
}