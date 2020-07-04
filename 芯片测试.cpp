#include <iostream>

using namespace std;
#define MAX 20 

int mydata[MAX][MAX];
int record[MAX] = {1, 0 };

void check(	int n) {
	int row = 0;
	while (row < n) {
		int i;
		for (i = 0; i < n; i++) {
			record[i] = mydata[row][i];
			if (mydata[row][i] == 1) {
				if (mydata[i][row] == 1) {
					continue;
				}
				else {
					record[row] = 0;
					break;
				}
			}
		}
		if (i == n)return;
		row++;
	}
}
int main4_17() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> mydata[i][j];
	check(n);
	for (int i = 0; i < n; i++) {
		if (record[i] == 1) {
			cout << i + 1<<" ";
		}
	}
	cin >> n;
	return 0;
}