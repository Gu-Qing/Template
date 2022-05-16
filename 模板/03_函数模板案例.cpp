#include <iostream>
using namespace std;

//ʵ��ͨ�� �������������ĺ���
//���򣺴Ӵ�С ѡ������
//���� char��int����

template<typename T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		int max = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[max] < arr[j]) {
				max = j;
			}
		}
		if (max != i) {
			Swap(arr[max], arr[i]);
		}
	}
}

template<typename T>
void printArray(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test003() {
	char chArr[] = "badcfe";
	int len = sizeof(chArr) / sizeof(chArr[0]);
	mySort(chArr, len);
	printArray(chArr, len);

	//����int����
	int intArr[] = { 3, 5, 2, 7, 8, 1, 0, 6, 9 };
	len = sizeof(intArr) / sizeof(intArr[0]);
	mySort(intArr, len);
	printArray(intArr, len);
}
int test03() {

	test003();

	return 0;
}