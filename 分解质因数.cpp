/*
	��������
�����������[a,b]�������������������ֽ⡣
�����ʽ
����������������a��b��
�����ʽ
����ÿ�����һ�����ķֽ⣬����k=a1*a2*a3...(a1<=a2<=a3...��kҲ�Ǵ�С�����)(����ɿ�����)
��������
3 10
�������
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
��ʾ
������ɸ������������Ȼ���ٷֽ⡣
���ݹ�ģ��Լ��
����2<=a<=b<=10000
*/
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void getzhishu(int a,int b,int data[]) {
	int index = 0;
	if (a == 2) {
		data[index++] = 2;
		data[index++] = 3;
		/*cout << 2 << endl << 3<<endl;*/
	}
	if (a==3) {
		data[index++] = 3;
		/*cout << 3 << endl;*/
	}
	for (; a <= b; a++) {
		if (a % 6 == 5 || a % 6 == 1) {
			for (int i = 2; i < int(sqrtl(a) + 1); i++) {
				if (a%i == 0) {
					break;
				}
				else
					continue;
			}
			data[index++] = a;
			/*cout << a << endl;*/
		}
		else {
			continue;
		}
	}
}

void fenjie(int a, int b, int data[]) {
	while (a <= b) {
		cout << a << "=";
		int index = 0;
		int aim = a;
		while (data[index] <= aim) {
			if (aim%data[index] == 0) {
				cout << data[index];
				aim = aim / data[index];
				if (aim != 1) cout << "*";
				continue;
			}
			else {
				index++;
			}
		}
		if (aim != 1) {
			cout << aim;
		}
		cout << endl;
		a++;
	}

}


int main5_11() {
	int data[10000] = { 11111 };
	int a, b;
	cin >> a >> b;
	getzhishu(a, b, data);
	fenjie(a, b, data);

	cin >> a;
	return 0;
}