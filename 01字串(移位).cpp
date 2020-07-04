#include<iostream>
using namespace std;
void Binarycout(char n)
{
	for (int i = 4; i>=0; i--)
	{
		cout <<( (n >> i) & 1);    //每一次输出一位
	}
	cout << endl;
}
int main3_27(void)
{
	char  arr = 0;
	while (arr <= 31)
	{
		Binarycout(arr);
		arr++;
	}
	return 0;
}

