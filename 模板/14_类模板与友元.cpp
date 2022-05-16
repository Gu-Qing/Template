#include <iostream>
#include <string>
using namespace std;

/*
* 全局函数类内实现——直接在类内声明友元即可
* 全局函数类外实现——需要提前让编译器知道全局函数的存在
*/

//类声明
template <class T1, class T2>
class Teacher;

//函数模板的实现
template <class T1, class T2>
void printTeacher2(Teacher<T1, T2> t) {
	cout << "类外实现：" << endl;
	cout << "Name: " << t.m_Name << " Age: " << t.m_Age << endl;
}

template <class T1, class T2>
class Teacher {
	//全局函数 类内实现
	friend void printTeacher(Teacher<T1, T2> t) {
		cout << "Name: " << t.m_Name << " Age: " << t.m_Age << endl;
	}

	//全局函数 类外实现(普通函数的声明)
	//friend void printTeacher2(Teacher<T1, T2> t);
	//如果是全局函数类外实现，需要让编译器提前知道这个函数的存在（把实现提前到类上方，再额外声明类）
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

//函数模板的实现
//template <class T1, class T2>
//void printTeacher2(Teacher<T1, T2> t) {
//	cout << "类外实现：" << endl;
//	cout << "Name: " << t.m_Name << " Age: " << t.m_Age << endl;
//}

int test14() {

	//全局函数类内实现测试
	Teacher<string, int> p("Tom", 20);
	printTeacher(p);

	//全局函数类外实现测试
	Teacher<string, int> p1("Marry", 18);
	printTeacher2(p1);

	system("pause");

	return 0;
}