#include <iostream>
#include <tuple>

using namespace std;

template<size_t N>
int print_array(int (&t)[N]) {
	int size = N;
	for (int i = 0; i < size; i++) {
		if (i == size - 1) {
			cout << t[i];
		}
		else {
			cout << t[i] << ", ";
		}
	}
	cout << endl;
	return size;
};