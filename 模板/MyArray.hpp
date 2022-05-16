//�Լ���ͨ�õ�������
#pragma once
#include <iostream>
using namespace std;

template <class T>
class MyArray {
public:
	//���캯��
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->pAddress = new T[this->m_Capacity];
		this->m_Size = 0;
		//cout << "MyArray���вι���" << endl;
	}
	//�������캯��
	MyArray(const MyArray& arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//���
		this->pAddress = new T[arr.m_Capacity];
		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}

		//cout << "MyArray�Ŀ�������" << endl;

	}
	//����= ��ֹǳ��������
	MyArray& operator= (const MyArray& arr) {
		//���ж�ԭ�������Ƿ������ݣ����У����ͷ�
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		//cout << "MyArray�ĵȺ�����" << endl;

		return *this;
	}

	//β�巨
	void PushBack(const T& val) {
		if (this->m_Capacity == this->m_Size) {
			cout << "������������������ʧ��" << endl;
			return;
		}
		this->pAddress[this->m_Size] = val;
		++this->m_Size;
	}

	//βɾ��
	void PopBack() {
		//���û����ʲ������һ��Ԫ�أ��߼�ɾ��
		if (this->m_Size == 0) return;
		-- this->m_Size;
	}

	//ͨ���±���������е�Ԫ��
	T& operator[] (int index) { //��������ĵ��û���Ҫ��Ϊ��ֵ����Ҫ�������� arr[0] = 100
		return this->pAddress[index];
	}
	
	//������������
	int GetCapacity() {
		return this->m_Capacity;
	}

	//���������С
	int GetArraySize() {
		return this->m_Size;
	}

	//��������
	~MyArray() {
		if (this->pAddress != NULL) {
			delete[] pAddress;
			this->pAddress = NULL;
		}
		//cout << "MyArray����������" << endl;
	}
private :
	T* pAddress; //ָ��ָ��������ٵ���ʵ����

	int m_Capacity; //��������

	int m_Size; //�����С
};