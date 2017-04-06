// 31 : 删除重复元素保留1个

// 描述
// 输入n 个整型数，把其中重复出现的元素删去（如出现三个5，则只保留第一次出现的5，删去后两个5），将剩余的元素顺次输出。整数个数 n 不大于300

// 输入
// 第1行，输入整数的个数 n；
// 第2行，输入 n 个整数，整数之间以空格间隔；

// 输出
// 按原有顺序输出新数组（删除的不输出），数据之间以逗号间隔

// 样例输入
// 10
// 5 6 7 5 8 5 7 9 8 6

// 样例输出
// 5,6,7,8,9

#include <iostream>
using namespace std;

int main() {

	int n=0;
	int a[300],b[300];
	int count = 0;

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		bool has = false;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				has = true;
				break;
			}
		}
		if(!has){
			b[count] = a[i];
			count++;
		}
		
	}
	cout << count << endl;
	for(int i=0;i<count;i++){
		cout << b[i] << ',';
	}
	cout << endl;
	// your code goes here
	return 0;
}