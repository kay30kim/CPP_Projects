#pragma once

#include <iostream>

template<typename T>
void iter(T *arr, size_t len, void (*f)(T &)) {
	for (size_t i = 0; i < len; i++) {
		f(arr[i]);
	}
}

void iter2(void (*f)()) {
	f();
}

template<typename T>
void print(T &i) {
	std::cout << i << std::endl;
}