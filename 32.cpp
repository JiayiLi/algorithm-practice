// 32:数组去重排序

// 描述
// 小吉是银行的会计师，在处理银行帐目的时候，遇到了一些问题。有一系列整数，其中含有重复的整数，需要去掉重复后，排序输出，你能帮助小吉解决问题吗？

// 输入
// 输入数据共2行，第一行输入测试数据个数n，第二行输入这n个整数，整数之间可能有重复，整数之间可能有若干个空格。
// n <= 105，所有的整数不超过104。

// 输出
// 输出为1行，是这n个数去重后从小到大的排序。

// 样例输入
// 3
// 4 4 2

// 样例输出
// 2 4




#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[105],b[105];
	int count =0;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	for(int i=0;i<n;i++){
		bool same = false;
		for(int j=0;j<i;j++){
			if(a[i] == a[j]){
				same = true;
			}

		}

		if(!same){
			b[count] = a[i];
			count ++;
		}
	}

	for(int i=0;i<count;i++){
		for(int j=0;j<count;j++){
			if(b[i]<b[j]){
				int temp = 0;
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	for(int i = 0;i<count;i++){
		cout << b[i] << ' ';
	}
	cout << endl;

	// your code goes here
	return 0;
}






