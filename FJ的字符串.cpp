/*
��������
����FJ��ɳ����д������һЩ�ַ�����
  ����A1 = ��A��
	����A2 = ��ABA��
	  ����A3 = ��ABACABA��
		����A4 = ��ABACABADABACABA��
		  ������ ��
			���������ҳ����еĹ��ɲ�д���е�����AN��
			  �����ʽ
			  ��������һ������N �� 26��
				�����ʽ
				�����������Ӧ���ַ���AN����һ�����з�����������в��ú��ж���Ŀո���С��س�����
				  ��������
				  3
				  �������
				  ABACABA
				

*/


#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main4_18() {
	string str="";
	int c=65;
	int n;
	cin >> n;
	for (; c <+65+ n; c++) {
		str = str + (char)c + str;
	}
	cout << str;
	cin >> n;
	return 0;
}