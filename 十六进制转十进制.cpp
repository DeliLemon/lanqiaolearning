#include<iostream>
#include<string>
using namespace std;
int main3_6() {
	unsigned int  a;
	char str[10];
	cin >> str;
	sscanf_s(str, "%x", &a);
	cout << a;
	cin >> a;
	return 0;
}