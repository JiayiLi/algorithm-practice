// 38:第二个重复出现的数

// 描述
// 给定一个正整数数组（元素的值都大于零），输出数组中第二个重复出现的正整数，如果没有，则输出字符串"NOT EXIST"。

// 输入
// 第一行为整数m，表示有m组数据。
// 其后每组数据分两行：
// 第一行为正整数n（3 < n < 500），表示数组的长度；
// 第二行是n个正整数，正整数间用空格分开。

// 输出
// 有m行输出，每行输出对于数组中第二个重复出现的正整数，如果没有，则输出字符串"NOT EXIST"。

// 样例输入
// 5
// 10
// 1 3 5 7 9 7 8 5 2 6
// 10
// 1 3 5 5 7 9 7 8 2 6
// 10
// 1 3 5 5 7 9 4 8 2 6
// 10
// 1 3 5 7 2 9 9 8 7 5
// 10
// 1 3 5 2 7 9 9 8 7 5

// 样例输出
// 7
// 7
// NOT EXIST
// 7
// 7





#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int m;
	cin >> m;
	int result[m];
	int p=0;

	for(int z=0;z<m;z++){
		int n;
		cin>> n;
		int a[500];
		int k=0;

		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					k++;
					if(k==2){
						result[p] = a[i];
					}
				}
			}
		}
		p++;
	}


	for(int i=0;i<m;i++){
		if(result[i]){
			cout << result[i] << endl;

		}else {
			cout << "NOT EXIST" <<endl;
		}
	}
	return 0;
}





