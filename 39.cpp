// 39:整数奇偶排序

// 描述
// 输入10个整数，彼此以空格分隔
// 重新排序以后输出(也按空格分隔)，要求:
// 1.先输出其中的奇数,并按从大到小排列；
// 2.然后输出其中的偶数,并按从小到大排列。

// 输入
// 任意排序的10个整数（0～100），彼此以空格分隔

// 输出
// 按照要求排序后输出，由空格分隔

// 样例输入
// 4 7 3 13 11 12 0 47 34 98

// 样例输出
// 47 13 11 7 3 0 4 12 34 98

// 提示
// 1. 测试数据可能有很多组，请使用while(cin>>a[0]>>a[1]>>...>>a[9])类似的做法来实现；
// 2. 输入数据随机，有可能相等。




#include <iostream>
#include <iomanip>
using namespace std;

void sorting (int a[] ,int n ,bool bigfirst){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){

			if(bigfirst){
				if(a[i]<=a[j]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}else {
				if(a[i]>=a[j]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			
		}

	}
}

int main() {

	int a[10];
	int odd[10];	// 奇数
	int even[10]; // 偶数

	int x=0,y=0;
	for(int i=0;i<10;i++){
		cin >> a[i];
	}

	for(int i=0;i<10;i++){
		if(a[i]%2 ==0){
			even[x] = a[i]; 
			x++;
		}else{
			odd[y] = a[i];
			y++;
		}
	}

	sorting(even,x,true);

	sorting(odd,y,false);

	for(int i=0;i<y;i++){
		cout << odd[i] << ' ';
	}

	for(int i=0;i<x;i++){
		cout << even[i] << ' ';
	}

	
	cout <<endl;
	return 0;
}





