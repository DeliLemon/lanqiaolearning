#include<iostream>
#include<string>
using namespace std;
int main3_9() {
	int five_limit;
	int six_limit;
	int num;
	cin >> num;
	if (num>45) {
		five_limit = -1;
		six_limit = (num - 36) / 2;
	}
	else {
		five_limit = num - 36;
		six_limit = (num - 36) / 2;
	}
	while (six_limit<=9) {
		if (six_limit == 0) {
			break;
		}
		int result;
		for (int i = 1; i <= 9; i++) {
			for (int j = 0; j <= 9; j++) {
				result = i * 2 + j * 2 + six_limit * 2;
				if (result == num) {
					cout << i*100001+j*10010+ six_limit *1100 << endl;
				}
			}
		}
		six_limit++;
	}
	while (five_limit > 0 && five_limit <= 9) {
		int result;
		for (int i = 1; i <= 9; i++) {
			for (int j = 0; j <= 9; j++) {
				result = i * 2 + j * 2 + five_limit ;
				if (result == num) {
					cout << i *10001+ j *1010+five_limit*100<<endl;
				}
			}
		}
		five_limit++;
	}
	return 0;
}