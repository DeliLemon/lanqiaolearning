#include<iostream>

 int data[200];
 int result[200];

void function(int floor,int ceiling) {
	int limit = (floor + ceiling) / 2;
	if (limit > floor) {
		function(floor, limit);
	}
	if ((limit + 1) < ceiling) {
		function(limit + 1, ceiling);
	}
	int i = limit, count, j;
	count=j = ceiling;
	while (1) {
		if (data[i]>data[j]) {
			result[count] = data[i];
			i--;
		}else{
			result[count] = data[j];
			j--;
		}
		count--;
		if (i < floor || j < limit + 1) {
			break;
		}
	}
	if (i >=floor) {
		for (; i >= floor; i--) {
			result[count] = data[i];
			count--;
		}
	}
	else {
		for (; j > limit; j--) {
			result[count] = data[j];
			count--;
		}
	}
	for (int x = floor; x <= ceiling; x++) {
		data[x] = result[x];
	}
}
int main3_3() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> data[i];
	}
	function(0, n-1);
	for (int i = 0; i < n; i++) {
		std::cout << data[i] << " ";
	}
	std::cin >> n;
	return 0;
}