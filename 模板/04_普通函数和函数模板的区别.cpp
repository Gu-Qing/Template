#include <iostream>
using namespace std;

//1.普通函数调用可以发生隐式类型转换
//2.函数模板 用自动类型推导，不可以发生隐式类型转换
//3.函数模板 用显式指定类型，可以发生隐式类型转换

//建议使用显式指定类型的方式调用函数模板，因为可以自己确定通用类型T

//普通函数
int myAdd01(int a, int b) {
	return a + b;
}

template <typename T>
T myAdd02(T a, T b) {
	return a + b;
}
void test004() {
	int a = 10;
	int b = 20;
	char c = 'c';// c = 99

	cout << myAdd01(a, c) << endl;
	//cout << myAdd02(a, c) << endl; //自动类型推导，会报错，无法判断参数类型
	cout << myAdd02<int>(a, c) << endl; //显式指定类型，正常输出，会发生隐式类型转换

}

int test04() {

	test004();

	return 0;
}