/*
��������
������ǰ����һֻ�԰��Ӻ������ĺ��ӣ������Գ����������ӣ����ǣ����Բ�ͬ�İ����ٶ�Ҳ��ͬ�����ÿ���ӳ�x�����²˰�ÿ���ӳ�y����
  û���ڵİ���ÿ���ӳ�z����������x1�������y1���²˰���z1��û���ڵİ��ӣ��ʣ����ӳ�����Щ����Ҫ��ã��������pλС����
  �����ʽ
  ��������1�У�����7���������ֱ��ʾ�Բ�ͬ���ӵ��ٶȺͲ�ͬ���ӵĸ����ͱ�����λ����
	�����ʽ
	�������һ�У�����1��ʵ������ʾ�������а��ӵ�ʱ�䡣
	  ��������
	  4 3 2 20 30 15 2
	  �������
	  22.50
	  ���ݹ�ģ��Լ��
	  ����0<x<100;0<y<100;0<z<100;0<x1<=1000000;0<y1<=10000000;0<z1<=10000000;0<p<=1000

		�۲죺���ݹ�ģ�������c++�ܼ򵥾���ʵ��

		����˵�����÷�������ѧ���ģ�Ȼ�����Լ���һ��
		��Դ��https://blog.csdn.net/GaoJuno23/article/details/105524490?utm_medium=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromMachineLearnPai2-1.nonecase&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromMachineLearnPai2-1.nonecase
		*/


#include<iostream>
#include <iomanip>
using namespace std;


int main7_11_02() {
	double x, y, z, x1, y1, z1;
	int  p;
	cin >> x >> y >> z >> x1 >> y1 >> z1 >> p;

	double result = (x1*y*z + y1*x*z + z1*x*y) / (x*y*z);
	//���ö���С�������ͬʱ�������pλС��
	cout << setiosflags(ios::fixed)<<setprecision(p);
	cout << result;
	return 0;
}