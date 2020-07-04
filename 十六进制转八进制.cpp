#include<iostream>
#include<string>
using namespace std;
#include <iostream>
#include <string>
using namespace std;
void ToEight(string sixteen)
{
	string eight, two;
	two = "";
	for (int j = 0; j < sixteen.size(); j++)
	{
		switch (sixteen[j]) {
		case '0': two += "0000"; break;
		case '1': two += "0001"; break;
		case '2': two += "0010"; break;
		case '3': two += "0011"; break;
		case '4': two += "0100"; break;
		case '5': two += "0101"; break;
		case '6': two += "0110"; break;
		case '7': two += "0111"; break;
		case '8': two += "1000"; break;
		case '9': two += "1001"; break;
		case 'A': two += "1010"; break;
		case 'B': two += "1011"; break;
		case 'C': two += "1100"; break;
		case 'D': two += "1101"; break;
		case 'E': two += "1110"; break;
		case 'F': two += "1111"; break;
		default:break;
		}
	}
	if (two.size() % 3 == 1)
	{
		two = "00" + two;
	}
	else if (two.size() % 3 == 2)
	{
		two = "0" + two;
	}
	for (int j = 0; j < two.size(); j += 3)
	{
		int temp = 4 * (two[j] - '0') + 2 * (two[j + 1] - '0') + (two[j + 2] - '0');
		eight += temp + '0';
	}
	int begin = 0;
	while (eight[begin] == '0')begin++;
	for (begin; begin < eight.size(); begin++)
	{
		cout << eight[begin];
	}cout << endl;
}
int main3_5()
{
	int n;
	string sixteen[10];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> sixteen[i];
	}
	for (int i = 0; i < n; i++)
	{
		ToEight(sixteen[i]);
	}
	cin >> n;
	return 0;
}