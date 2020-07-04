/*
 ��������
��������һ��n*n�����̣���������һЩλ�ò��ܷŻʺ�����Ҫ�������з���n���ڻʺ��n���׻ʺ�ʹ����������ڻʺ�
		������ͬһ�С�ͬһ�л�ͬһ���Խ����ϣ�����������׻ʺ󶼲���ͬһ�С�ͬһ�л�ͬһ���Խ����ϡ����ܹ��ж����ַŷ���nС�ڵ���8��
����
�����ʽ
��������ĵ�һ��Ϊһ������n����ʾ���̵Ĵ�С��
����������n�У�ÿ��n��0��1�����������һ������Ϊ1����ʾ��Ӧ��λ�ÿ��ԷŻʺ����һ������Ϊ0����ʾ��Ӧ��λ�ò����ԷŻʺ�
����
�����ʽ
�������һ����������ʾ�ܹ��ж����ַŷ���
����
��������
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
�������
2

��������
4
1 0 1 1
1 1 1 1
1 1 1 1
1 1 1 1
�������
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


