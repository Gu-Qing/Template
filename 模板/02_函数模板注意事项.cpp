#include <iostream>
using namespace std;

//����ģ��ע������

template<typename T> //typename�����滻��class Ч����һ��
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
	//mySwap1(a, c); //�Ƶ�����һ��T���ͣ�����

	//func();  //�ᱨ���޷�ȷ��T����������
	func<int>();
}

int test02() {

	test002();

	system("pause");

	return 0;
}