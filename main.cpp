#include <iostream>
#include <fstream>      
#include <vector>
#include <random>
#include "print.cpp"
using namespace std;

int board[4][4] = { 0 };

static int random(int offset, int range) {
	random_device rd;
	uniform_int_distribution<int> dist(offset, range);
	return dist(rd);
};

template<size_t rows, size_t cols>
vector<pair<int, int>> get_empty(int(&board)[rows][cols]){
	vector<pair<int, int>> pos;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (board[i][j] == 0) {
				pos.push_back(make_pair(i, j));
			}
		}
	}

	return pos;
};

static void add_cell() {
	int next = random(0,17);
	next = (next == 1) ? 4 : 2;
	pair<int, int> news = get_empty(board)[random(0,17)];
	cout << news.first << news.second << endl;
	board[get<0>(news)][get<1>(news)] = next;

	return;
};

int main() {

	for (int i = 0; i < 2; i++) {
		add_cell();
	}

	print_matrix(board);

	return 0;
};