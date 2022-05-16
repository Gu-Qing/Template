#include <iostream>
#include <string>
using namespace std;

/*
* 模板的局限性
* 模板不是万能的，有些特定数据结构，需要具体化方式做特殊实现
* 
* 利用具体化模板，可以解决自定义类型的通用化
* 学习模板并不是为了写模板，而是在STL能够运用系统提供的模板
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

//对比两个数据是否相等的函数
template <typename T>
bool myCompare(T& a, T& b) {
	return a == b ? true : false;
}
//利用具体化Person的版本实现代码，具体化优先调用
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

	//自定义类型对比
	Person p1 ("Tom", 10);
	Person p2 ("Tom", 10);
	ret = myCompare(p1, p2); //编译器不会报错
	cout << (ret ? "p1 == p2" : "p1 != p2") << endl;
}

int test06() {

	test006();

	system("pause");

	return 0;
}