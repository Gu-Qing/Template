#include <iostream>
using namespace std;

/*
* C++��һ�ֱ��˼��Ϊ���ͱ�̣���Ҫ���õ���������ģ��
* C++�ṩ����ģ����ƣ�����ģ�����ģ��
* 
* ����ģ�壺����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�����һ����������ʹ���
* template<typename T>
* ������������
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

//����ģ��
template <typename T> //����һ��ģ�壬���߱���������������н����ŵ�T��Ҫ����T��һ��ͨ����������
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

	//1.�Զ������Ƶ�
	mySwap(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	//2.��ʾָ������
	mySwap<double>(c, d);
	cout << "c = " << c << ", d = " << d << endl;

}

int test01() {

	test001();

	system("pause");

	return 0;
}