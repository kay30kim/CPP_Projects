#pragma once

#include <iostream>

template<typename T>
class Array {
private:
	T*		arr;
	unsigned int	size;
public:
	Array(void) {
		arr = new T();
		size = 0;
	}
	Array(unsigned int n) {
		arr = new T[n];
		size = n;
	}
	Array(const Array& copyArr) {
		arr = new T[copyArr.getSize()];
		size = copyArr.getSize();
		for (unsigned int i = 0; i < size; i++) {
			arr[i] = copyArr.
		}
	}
	unsigned int getSize(void) {
		return size;
	}
	~Array();
}