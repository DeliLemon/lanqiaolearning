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
		sscanf_s(str[j], "%x", &a); //ע�⵱��ֵ����ʱ��a�治�£����Դ������壬����Щ͵������
		cout << oct;
		cout << a << endl;
	}
	cin >> a;
	return 0;
}