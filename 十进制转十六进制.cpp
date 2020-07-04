#include<iostream>
#include<sstream>
using namespace std;

int main3_7() {
	int n;
	//	cout<<(char)65; AµÄASCIIÖµÎª65 
	cin >> n;
	string res = "";
	if (n == 0) cout << 0;
	else {
		while (n) {
			if (n % 16 == 10) res = "A" + res;
			else if (n % 16 == 11) res = "B" + res;
			else if (n % 16 == 12) res = "C" + res;
			else if (n % 16 == 13) res = "D" + res;
			else if (n % 16 == 14) res = "E" + res;
			else if (n % 16 == 15) res = "F" + res;
			else {

				stringstream ss;
				ss << n % 16;
				res = ss.str() + res;
			}
			n /= 16;
		}
		cout << res;
	}
	return 0;
}