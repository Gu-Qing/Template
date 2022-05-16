#include <iostream>
using namespace std;

/*
* 普通函数与函数模板调用规则:
* 1.如果函数模板和普通函数都可以调用，优先调用普通函数
* 2.可以通过空模板参数列表 强制调用函数模板
* 3.函数模板可以发生函数重载
* 4.如果函数模板可以产生更好的匹配，优先调用函数模板
* 
* 实际开发中，提供了函数模板就不要提供普通函数了，容易出现二义性
*/

void myPrint(int a, int b) {
	cout << "Normal function" << endl;
}

template<typename T>
void myPrint(T a, T b) {
	cout << "Template function 2" << endl;
}
template<typename T>
void myPrint(T a, T b, T c) {
	cout << "Template function 3" << endl;
}
void test005() {
	int a = 10, b = 20, c = 30;
	myPrint(a, b); //默认调用普通函数，哪怕普通函数只有声明没有实现（会报错）也是。

	myPrint<>(a, b); //通过空模板参数列表，强制调用函数模板

	myPrint(a, b, c); //函数模板可以发生重载

	char c1 = 'a', c2 = 'b';
	myPrint(c1, c2); //函数模板可以产生更好的匹配，默认调用函数模板
}

int test05(){

	test005();

	system("pause");

	return 0;
}