#include<iostream>
#include<string>
using namespace std;
int main3_4() {
	char str[10][100000] ;
	int n,a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin>>str[i];
	}
	for (int j = 0; j < n; j++) {
		sscanf_s(str[j], "%x", &a); //注意当数值过大时，a存不下，所以存在陷阱，坑那些偷懒的人
		cout << oct;
		cout << a << endl;
	}
	cin >> a;
	return 0;
}