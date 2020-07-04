#include<iostream>
#include<string>
using namespace std;
int main3_5_2() {
	string str;
	int a;
	a = 65;
	str = "2";
	str += a; 
	/**
		结果为2A
		原因是a被赋值给了一个字符类型的数据
	*/
	cout << str;
	cin >> a;
	return 0;
}

