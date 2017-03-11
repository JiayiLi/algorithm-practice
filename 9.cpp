// 9: 最远距离

// 描述
// 给定一组点(x,y)，求距离最远的两个点之间的距离。

// 输入
// 第一行是点数n（n大于等于2）
// 接着每一行代表一个点，由两个浮点数x y组成。

// 输出
// 输出一行是最远两点之间的距离。
// 使用cout << fixed << setprecision(4) << dis << endl;输出距离值并精确到小数点后4位。
// fixed和setprecision是在<iomanip>头文件里定义的格式控制操作符，需要#include <iomanip>.

// 样例输入
// 6
// 34.0 23.0
// 28.1 21.6
// 14.7 17.1
// 17.0 27.2
// 34.7 67.1
// 29.3 65.1
// 样例输出
// 53.8516

// 提示
// 注意在内部计算时最好使用double类型，float精准度不能满足本题测试数据要求。



#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n ;
	double a[n][2]; //point
	double gap = 0;
	double maxgap = 0;
	for(int i = 0;i<n;i++){
		for(int j=0;j<2;j++){
			cin >> a[i][j] ;
		}
	}

	for(int i=0; i<n;i++){
		for(int j =1;j<n;j++){
			gap = sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			if(gap >maxgap){
				maxgap = gap;
			}
		}
	}

	cout << fixed << setprecision(4) << maxgap << endl;
	
	// your code goes here
	return 0;
}









