/*
 问题描述
　　给定一个n*n的棋盘，棋盘中有一些位置不能放皇后。现在要向棋盘中放入n个黑皇后和n个白皇后，使任意的两个黑皇后
		都不在同一行、同一列或同一条对角线上，任意的两个白皇后都不在同一行、同一列或同一条对角线上。问总共有多少种放法？n小于等于8。
　　
输入格式
　　输入的第一行为一个整数n，表示棋盘的大小。
　　接下来n行，每行n个0或1的整数，如果一个整数为1，表示对应的位置可以放皇后，如果一个整数为0，表示对应的位置不可以放皇后。
　　
输出格式
　　输出一个整数，表示总共有多少种放法。
　　
样例输入
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
2

样例输入
4
1 0 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
0

*/



#include<iostream>
#include<cmath>
using namespace std;

const int maxn = 8;
int n;
int map[maxn][maxn] = { 0 };
int posb[maxn] = { 0 };
int posw[maxn] = { 0 };
int ins = 0;

bool check_w(int cur,int p) {
	for (int i = 1; i < cur; i++) {
		if (posw[i] == p || abs(cur - i) == abs(p- posw[i]))return false;
	}
	return true;
}
bool check_b(int cur, int p) {
	for (int i = 1; i < cur; i++) {
		if (posb[i] == p || abs(cur - i) == abs(p - posb[i]))return false;
	}
	return true;
}
void dfs_white(int cur) {
	if (cur == n + 1) {
		ins++;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (map[cur][i] == 0)continue;
		if (posb[cur] == i)continue;
		if (check_w(cur, i)) {
			posw[cur] = i;
			dfs_white(cur + 1);
		}
	}
}

void dfs_black(int cur) {
	if (cur == n + 1) {
		dfs_white(1);
		return;
	}
	for (int i=1; i<= n; i++) {
		if (map[cur][i] == 0)continue;
		if (check_b(cur,i)) {
			posb[cur] = i;
			dfs_black(cur + 1);
		}
	}

}


int main4_13() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> map[i][j];
	dfs_black(1);
	cout << ins;
	cin >> ins;
	return 0;
}


