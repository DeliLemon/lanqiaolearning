#include<iostream>

using namespace std;
#define LENGTH 20480
int main3_29() {
	int result[LENGTH] = {1,0};
	int time,length,carry;
	cin >> time;
	length = 1;
	for (int i = 1; i <= time; i++) {
		carry = 0;
		for (int j = 0; j < length; j++) {
			int temp = result[j] * i + carry;
			result[j] = temp % 10;
			carry = temp / 10;
			if (j == length - 1 && carry != 0) {
				length++;
			}
		}
	}
	for (int i = 0; i < length; i++)cout << result[length - i - 1];
	cin >> time;
	return 0;
}