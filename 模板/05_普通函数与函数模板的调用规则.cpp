#include <iostream>
using namespace std;

/*
* ��ͨ�����뺯��ģ����ù���:
* 1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
* 2.����ͨ����ģ������б� ǿ�Ƶ��ú���ģ��
* 3.����ģ����Է�����������
* 4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
* 
* ʵ�ʿ����У��ṩ�˺���ģ��Ͳ�Ҫ�ṩ��ͨ�����ˣ����׳��ֶ�����
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
	myPrint(a, b); //Ĭ�ϵ�����ͨ������������ͨ����ֻ������û��ʵ�֣��ᱨ��Ҳ�ǡ�

	myPrint<>(a, b); //ͨ����ģ������б�ǿ�Ƶ��ú���ģ��

	myPrint(a, b, c); //����ģ����Է�������

	char c1 = 'a', c2 = 'b';
	myPrint(c1, c2); //����ģ����Բ������õ�ƥ�䣬Ĭ�ϵ��ú���ģ��
}

int test05(){

	test005();

	system("pause");

	return 0;
}