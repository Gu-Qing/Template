#include <iostream>
using namespace std;

//函数模板注意事项

template<typename T> //typename可以替换成class 效果都一样
//template<class T>
void mySwap1(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
template<class T>
void func() {
	cout << "func" << endl;
}



void test002() {
	int a = 10;
	int b = 20;
	double c = 2.4;
	mySwap1(a, b);
	cout << a << " " << b << endl;
	//mySwap1(a, c); //推导不出一致T类型，报错

	//func();  //会报错，无法确定T的数据类型
	func<int>();
}

int test02() {

	test002();

	system("pause");

	return 0;
}