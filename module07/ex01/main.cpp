#include "iter.hpp"

void hello() {
	printf("hello\n");
}

int main(void) {
	int arr[10] = {0,1, 23, 05, 02};
	char str[10] = "hello wo";

	iter(arr, 5, &print);
	iter(str, 8, &print);
	iter2(&hello);
}