#include<iostream>
#define MAX 200

int mydata[MAX][MAX] = { 0 };

using namespace std;
void huixing_print(int total, int time,int  m, int n) {
	int start = 0;
	while (1) {
		//��һ��
		for (int i = start; i < m - start && time < total; i++) {
			time++;
			cout << mydata[i][start] << " ";
		}
		//��һ��
		for (int i = start + 1; i < n - start && time < total; i++) {
			time++;
			cout << mydata[m - start-1][i] << " ";
		}
		//��һ��
		for (int i = m - start - 2; i > start && time < total; i--) {
			time++;
			cout << mydata[i][n - start - 1] << " ";
		}
		//��һ��
		for (int i = n - start - 1; i > start && time < total; i--) {
			time++;
			cout << mydata[start][i] << " ";
		}
		if (!(time < total))break;
		start++;
	}
}

int main4_14() {
	int total, time, m, n;
	cin >> m >> n;
	total = m*n;
	time = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >>mydata[i][j];
	huixing_print( total, time, m, n);
	cin >> n;
	return 0;
}