//自己的通用的数组类
#pragma once
#include <iostream>
using namespace std;

template <class T>
class MyArray {
public:
	//构造函数
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->pAddress = new T[this->m_Capacity];
		this->m_Size = 0;
		//cout << "MyArray的有参构造" << endl;
	}
	//拷贝构造函数
	MyArray(const MyArray& arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}

		//cout << "MyArray的拷贝构造" << endl;

	}
	//重载= 防止浅拷贝问题
	MyArray& operator= (const MyArray& arr) {
		//先判断原来堆区是否有数据，如有，先释放
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		//cout << "MyArray的等号重载" << endl;

		return *this;
	}

	//尾插法
	void PushBack(const T& val) {
		if (this->m_Capacity == this->m_Size) {
			cout << "数组容量已满，插入失败" << endl;
			return;
		}
		this->pAddress[this->m_Size] = val;
		++this->m_Size;
	}

	//尾删法
	void PopBack() {
		//让用户访问不到最后一个元素，逻辑删除
		if (this->m_Size == 0) return;
		-- this->m_Size;
	}

	//通过下标访问数组中的元素
	T& operator[] (int index) { //如果函数的调用还需要作为左值，就要返回引用 arr[0] = 100
		return this->pAddress[index];
	}
	
	//返回数组容量
	int GetCapacity() {
		return this->m_Capacity;
	}

	//返回数组大小
	int GetArraySize() {
		return this->m_Size;
	}

	//析构函数
	~MyArray() {
		if (this->pAddress != NULL) {
			delete[] pAddress;
			this->pAddress = NULL;
		}
		//cout << "MyArray的析构函数" << endl;
	}
private :
	T* pAddress; //指针指向堆区开辟的真实数组

	int m_Capacity; //数组容量

	int m_Size; //数组大小
};