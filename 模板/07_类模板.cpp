#include <iostream>
#include <string>
using namespace std;

//ÀàÄ£°å
template <class NameType, class AgeType>
class Humen {
public :
	NameType m_Name;
	AgeType m_Age;

	Humen(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void show() {
		cout << "Name: " << this->m_Name << ", Age: " << this->m_Age << endl;
	}
};

int test07() {

	Humen<string, int> h1("ËïÎò¿Õ", 999);
	h1.show();

	system("pause");

	return 0;
}