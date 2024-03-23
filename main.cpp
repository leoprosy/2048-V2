#include <iostream>
#include <fstream>      
#include <vector>
#include <tuple>
#include "print.cpp"
using namespace std;

//int board[4][4] = { 0 };
vector<vector<int>> board(4, vector<int>(4));

static int random(int offset, int range) {
	srand((unsigned)time(NULL));
	int random = offset + (rand() % range);
	return random;
};

static void print_matrix(vector<vector<int>> v) {
	for (int i = 0; i < size(v); i++) {
		for (int j = 0; j < size(v[i]); j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

vector<tuple<int, int>> get_empty() {
	vector<tuple<int, int>> pos = {};
	for (int i = 0; i < size(board); ++i) for (int j = 0; j < size(board[i]); ++j) if (board[i][j] == 0) pos.emplace_back(i, j);

	/*for (tuple<int, int> i : pos) { 
		print_tuple(i);
	}*/

	return pos;
};

void add_cell() {
	int next = random(1, 17);
	next = (next == 16) ? 4 : 2;
	tuple<int, int> news = get_empty()[random(0,16)];
	board[get<0>(news)][get<1>(news)] = next;
	return;
};

int main() {

	/*for (int i = 0; i < 2; i++) {
		add_cell();
	};

	print_matrix(board);*/

	int a[2] = { 0,1 };
	print_array(a);

	return 0;
};