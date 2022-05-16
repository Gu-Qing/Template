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
	cout << "arr1的打印输出：" << endl;
	PrintIntArray(arr1);
	cout << "arr1的容量：" << arr1.GetCapacity() << endl;
	cout << "arr1的大小：" << arr1.GetArraySize() << endl;
	
	arr3 = arr1;

	cout << "arr3 = arr1后调用尾删法" << endl;
	arr3.PopBack();
	cout << "arr3的打印输出：" << endl;
	PrintIntArray(arr3);
	cout << "arr3的容量：" << arr3.GetCapacity() << endl;
	cout << "arr3的大小：" << arr3.GetArraySize() << endl;
}

void printTestArray(MyArray<Test>& arr) {
	for (int i = 0; i < arr.GetArraySize(); i++) {
		cout << "Name : " << arr[i].m_Name
			<< " Age : " << arr[i].m_Age << endl;
	}
}

void test0115() {
	MyArray<Test> arr(10);
	Test t1("孙悟空", 9999);
	Test t2("猪八戒", 8888);
	Test t3("沙和尚", 6666);
	Test t4("唐僧", 99);

	arr.PushBack(t1);
	arr.PushBack(t2);
	arr.PushBack(t3);
	arr.PushBack(t4);

	printTestArray(arr);
	cout << "arr的容量：" << arr.GetCapacity() << endl;
	cout << "arr的大小：" << arr.GetArraySize() << endl;
}

int main() {

	test0015();
	cout << "----------------------------" << endl;
	test0115();

	system("pause");

	return 0;
}