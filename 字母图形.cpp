#include<iostream>
using namespace std;
int main3_25() {
	char x;
	int row, column,add=1;
	cin >> row>>column;
	for (int i = 0; i < row; i++) {
		x = 65+i;
		for (int j = 0; j < column;j++) {
			cout << x;
			if (j < i) {
				add = -1;
				x += add;
			}
			else {
				add = 1;
				x += add;
			}
		}
		cout << endl;
	}
	return 0;
}