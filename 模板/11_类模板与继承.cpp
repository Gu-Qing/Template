#include <iostream>
using namespace std;

/*
* ����ģ�������̳�ʱ����Ҫע�⣺
* 1.������̳еĸ�����һ����ģ��ʱ��������������ʱ����Ҫָ����������T������
* 2.�����ָ�����������޷�����������ڴ�
* 3.�����Ҫ���ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊģ����
*/

template<class T>
class Base {
public :
	T m;
};

//class Son : public Base { };//����ֱ��ʹ�ã��ᱨ���޷��жϸ�������
class Son1 : public Base<int> {

};

//�����Ҫ���ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊģ����
template<class T1, class T2>
class Son2 : Base<T2> {
public :
	T1 obj;

	Son2() {
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}
};

int test11() {

	Son1 s1;

	Son2<int, char> s2;

	return 0;
}