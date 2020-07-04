
/*
	 哈夫曼编码应用。随机输入一段英文，统计输出该段英文中各字母的出现频率及总的字符数，
	 利用哈弗曼算法对各字母进行编码并输出编码结果，输出该段英文的哈弗曼编码
*/


#include<iostream>

using namespace std;
void quick_order(int data[],int floor,int top) {
	if (top - floor < 1)return;
	int s_cursor = floor, b_cursor = top;
	while (s_cursor != b_cursor) {
		while ( s_cursor < b_cursor) {
			if (data[s_cursor] <= data[b_cursor]) {
				s_cursor++;
				continue;
			}
			else {
				int tmp = data[s_cursor];
				data[s_cursor] = data[b_cursor];
				data[b_cursor] = tmp;
				b_cursor--;
				break;
			}
		}
		while (s_cursor < b_cursor) {
			if (data[s_cursor] <= data[b_cursor]) {
				b_cursor--;
				continue;
			}
			else {
				int tmp = data[s_cursor];
				data[s_cursor] = data[b_cursor];
				data[b_cursor] = tmp;
				s_cursor++;
				break;
			}
		}
	}
	//half of left
	quick_order(data, floor, s_cursor-1);
	//half of right
	quick_order(data, b_cursor, top);
}
void insert(int data[],int start,int end) {
	while (start < end) {
		if (data[start] <data[start+ 1]) {
			return;
		}
		int tmp = data[start + 1];
		data[start + 1] = data[start ];
		data[start] = tmp;
		start++;
	}
	return;
}
int main4_5() {
	int n,sum=0;
	int data[120] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
	quick_order(data, 0, n-1);
	int cursor = 0;
	for (; cursor < n-1; cursor++) {
		int tmp = data[cursor] + data[cursor + 1];
		data[cursor + 1] = tmp;
		insert(data,  cursor + 1, n-1);
		sum += tmp;
	}
	cout << sum;
	cin >> n;
	return 0;
}