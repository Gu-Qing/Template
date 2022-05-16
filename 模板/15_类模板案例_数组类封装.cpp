#include <iostream>
#include "MyArray.hpp"
using namespace std;

class Test {
public:
	string m_Name;
	int m_Age;

	Test() {}

	Test(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
};

void PrintIntArray(MyArray<int> &arr) {
	for (int i = 0; i < arr.GetArraySize(); i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void test0015() {
	MyArray<int> arr1(10);
	MyArray<int> arr2(arr1);
	MyArray<int> arr3(100);

	for (int i = 0; i < 5; i++) {
		arr1.PushBack(i);
	}
	cout << "arr1�Ĵ�ӡ�����" << endl;
	PrintIntArray(arr1);
	cout << "arr1��������" << arr1.GetCapacity() << endl;
	cout << "arr1�Ĵ�С��" << arr1.GetArraySize() << endl;
	
	arr3 = arr1;

	cout << "arr3 = arr1�����βɾ��" << endl;
	arr3.PopBack();
	cout << "arr3�Ĵ�ӡ�����" << endl;
	PrintIntArray(arr3);
	cout << "arr3��������" << arr3.GetCapacity() << endl;
	cout << "arr3�Ĵ�С��" << arr3.GetArraySize() << endl;
}

void printTestArray(MyArray<Test>& arr) {
	for (int i = 0; i < arr.GetArraySize(); i++) {
		cout << "Name : " << arr[i].m_Name
			<< " Age : " << arr[i].m_Age << endl;
	}
}

void test0115() {
	MyArray<Test> arr(10);
	Test t1("�����", 9999);
	Test t2("��˽�", 8888);
	Test t3("ɳ����", 6666);
	Test t4("��ɮ", 99);

	arr.PushBack(t1);
	arr.PushBack(t2);
	arr.PushBack(t3);
	arr.PushBack(t4);

	printTestArray(arr);
	cout << "arr��������" << arr.GetCapacity() << endl;
	cout << "arr�Ĵ�С��" << arr.GetArraySize() << endl;
}

int main() {

	test0015();
	cout << "----------------------------" << endl;
	test0115();

	system("pause");

	return 0;
}