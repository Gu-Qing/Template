#include <iostream>
using namespace std;

//1.��ͨ�������ÿ��Է�����ʽ����ת��
//2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3.����ģ�� ����ʽָ�����ͣ����Է�����ʽ����ת��

//����ʹ����ʽָ�����͵ķ�ʽ���ú���ģ�壬��Ϊ�����Լ�ȷ��ͨ������T

//��ͨ����
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
	//cout << myAdd02(a, c) << endl; //�Զ������Ƶ����ᱨ���޷��жϲ�������
	cout << myAdd02<int>(a, c) << endl; //��ʽָ�����ͣ�����������ᷢ����ʽ����ת��

}

int test04() {

	test004();

	return 0;
}