#include <iostream>
using namespace std;

/*
* 当类模板碰到继承时，需要注意：
* 1.当子类继承的父类是一个类模板时，子类在声明的时候，需要指定出父类中T的类型
* 2.如果不指定，编译器无法给子类分配内存
* 3.如果想要灵活指定出父类中T的类型，子类也需要变为模板类
*/

template<class T>
class Base {
public :
	T m;
};

//class Son : public Base { };//不能直接使用，会报错，无法判断父类类型
class Son1 : public Base<int> {

};

//如果想要灵活指定出父类中T的类型，子类也需要变为模板类
template<class T1, class T2>
class Son2 : Base<T2> {
public :
	T1 obj;

	Son2() {
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
};

int test11() {

	Son1 s1;

	Son2<int, char> s2;

	return 0;
}