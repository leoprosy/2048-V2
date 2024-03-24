#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

template<size_t N>
void print_array(int (&t)[N]) {
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
};

template<size_t rows, size_t cols>
void print_matrix(int (&t)[rows][cols]) {
	for (int (&i)[cols] : t) {
		for (int j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
}