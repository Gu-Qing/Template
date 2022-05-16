#include <iostream>
using namespace std;

/*
* C++另一种编程思想为泛型编程，主要利用的奇数就是模板
* C++提供两种模板机制：函数模板和类模板
* 
* 函数模板：建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型代表
* template<typename T>
* 函数声明或定义
*/

void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template <typename T> //声明一个模板，告诉编译器，后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void test001() {
	int a = 10;
	int b = 20;
	double c = 1.1;
	double d = 2.2;

	/*
	swapInt(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	swapDouble(c, d);
	cout << "c = " << c << ", d = " << d << endl;
	*/

	//1.自动类型推导
	mySwap(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	//2.显示指定类型
	mySwap<double>(c, d);
	cout << "c = " << c << ", d = " << d << endl;

}

int test01() {

	test001();

	system("pause");

	return 0;
}