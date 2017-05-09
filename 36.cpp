// 36:分数求和
// 描述
// 输入n个分数并对他们求和，并用最简形式表示。所谓最简形式是指：分子分母的最大公约数为1；若最终结果的分母为1，则直接用整数表示。
// 如：5/6、10/3均是最简形式，而3/6需要化简为1/2, 3/1需要化简为3。
// 分子和分母均不为0，也不为负数。

// 输入
// 第一行是一个整数n，表示分数个数，1 <= n <= 10；
// 接下来n行，每行一个分数，用"p/q"的形式表示，不含空格，p，q均不超过10。

// 输出
// 输出只有一行，即最终结果的最简形式。若为分数，用"p/q"的形式表示。

// 样例输入
// 2
// 1/2
// 1/3

// 样例输出
// 5/6

#include <iostream>
#include <iomanip>
using namespace std;



int gcd(int m, int n){ //最大公约数
 if (m == 0)
  return n;
 if (n == 0)
  return m;
 if (m < n)
 {
  int tmp = m;
  m = n;
  n = tmp;
 }
 while (n != 0)
 {
  int tmp = m % n;
  m = n;
  n = tmp;
 }

 return m;
}

int Lcm(int a,int b)  //最小公倍数 
{
    int c;
    if(a<=0||b<=0) return -1;
    c=gcd(a,b); 
    return a*b/c;
}

int main() {
	int n;
	char comma;
	cin>> n;

	int a[10][2];

	for(int i=0;i<n;i++){
		cin >> a[i][0] >> comma>> a[i][1];
	}

	int son=0;
	int parent=0;
	int d;
	for(int i=1;i<n;i++){
		d = Lcm(a[i][1],a[i-1][1]);
		a[i][0] = (a[i][0] *d/ a[i][1] + a[i-1][0]*d/a[i-1][1]);
		cout <<a[i][0]<<endl;
		parent = d;
	}


	if(a[n-1][0]/gcd(a[n-1][0],parent) == 1 && parent/gcd(a[n-1][0],parent) ==1){
		cout << 1 <<endl;
	}else {
		cout << a[n-1][0]/gcd(a[n-1][0],parent) << comma << parent/gcd(a[n-1][0],parent) << endl;

	}


	
	return 0;
}
