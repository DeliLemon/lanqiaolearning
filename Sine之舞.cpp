#include<iostream>
#include<string>
#include <cmath>

using namespace std;

string An(int n) {
	string an = "";
	string flag="";
	string sin = "sin(";
	string end = ")";
	int c = '1';
	for (int i = 1; i <=n; i++,c++) {
		an += flag+sin + char(c) ;
		if (i % 2 == 0) {
			flag = '+';
		}
		else {
			flag = '-';
		}
	}
	for(int i=0;i<n;i++)
		an += end;
	return an;
}
string Sn(int n) {
	string start = "";
	string end = "";
	string sn = "";
	int c = n + '0';
	for (int i = 1; i <= n; i++) {
		sn = start+sn + end + An(i) +"+"+char( c );
		c--;
		start = "(";
		end = ")";
	}
	return sn;
}
int main4_19() {
	int a0 = 0;
	int n;
	string an="";
	cin >> n;
	an=Sn(n);
	cout << an;
	cin >> n;
	return 0;
}