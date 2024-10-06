#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename S>
S	min(S &a, S &b) {
	return a < b ? a : b;
}

template<typename hola>
hola	max(hola &a, hola &b) {
	return a < b ? b : a;
}
#endif