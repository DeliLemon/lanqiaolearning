/*
问题描述
　　从前，有一只吃包子很厉害的猴子，它可以吃无数个包子，但是，它吃不同的包子速度也不同；肉包每秒钟吃x个；韭菜包每秒钟吃y个；
  没有馅的包子每秒钟吃z个；现在有x1个肉包，y1个韭菜包，z1个没有馅的包子；问：猴子吃完这些包子要多久？结果保留p位小数。
  输入格式
  　　输入1行，包含7个整数，分别表示吃不同包子的速度和不同包子的个数和保留的位数。
	输出格式
	　　输出一行，包含1个实数，表示吃完所有包子的时间。
	  样例输入
	  4 3 2 20 30 15 2
	  样例输出
	  22.50
	  数据规模和约定
	  　　0<x<100;0<y<100;0<z<100;0<x1<=1000000;0<y1<=10000000;0<z1<=10000000;0<p<=1000

		观察：数据规模不算大，用c++很简单就能实现

		补充说明：该方法网上学来的，然后再自己敲一遍
		来源：https://blog.csdn.net/GaoJuno23/article/details/105524490?utm_medium=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromMachineLearnPai2-1.nonecase&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromMachineLearnPai2-1.nonecase
		*/


#include<iostream>
#include <iomanip>
using namespace std;


int main7_11_02() {
	double x, y, z, x1, y1, z1;
	int  p;
	cin >> x >> y >> z >> x1 >> y1 >> z1 >> p;

	double result = (x1*y*z + y1*x*z + z1*x*y) / (x*y*z);
	//设置定点小数输出，同时设置输出p位小数
	cout << setiosflags(ios::fixed)<<setprecision(p);
	cout << result;
	return 0;
}