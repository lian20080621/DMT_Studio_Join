//1.从左到右，相邻两个数两两比较, 如果顺序不对就交换；每走一趟
//就会把当前最大（或最小）的数送到最右边。
//2.外循环走5次，内循环控制走哪，n - 1 -i是因为每走一次就有
//一个数固定好了。
//3.从大到小排序，只需要把if条件改为a[j] < a[j + 1]即可。

#include<iostream>
using namespace std;

int main() {
	int a[] = { 8, 3, 6, 2, 7, 1};
	int n = 6;
	
	for (int i = 0; i < n - 1;i++) {
		for (int j = 0;j < n - i - 1;j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
