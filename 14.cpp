// 14:发票统计

// 描述
// 有一个小型的报账系统，它有如下功能：
// （1）统计每个人所报发票的总钱数
// （2）统计每类发票的总钱数
// 将此系统简化为如下：假设发票类别共有A、B、C三种;一共有三个人，ID分别为1、2、3。

// 输入
// 系统输入包含三行，每行第一个数为人员ID（整型，1或2或3），第二个数为发票总张数(张数不超过100)，之后是多个发票类别（字符型，A或B或C）和相应发票金额（单进度浮点型,不超过1000.0）。

// 输出
// 输出包含六行，前三行为每人（按ID由小到大输出）所报发票总钱数（保留两位小数），后三行为每类发票的总钱数（保留两位小数）。

// 样例输入
// 1 5 A 1.0 A 2.0 C 1.0 B 1.0 C 1
// 3 3 B 1 C 2 C 1
// 2 4 B 1 A 1 C 1 A 1

// 样例输出
// 1 6.00
// 2 4.00
// 3 4.00
// A 5.00
// B 3.00
// C 6.00

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int id,n;
	double a=0,b=0,c = 0;
	char type;
	double num;

	for (int i=0;i<3;i++){
		double ids = 0;
		cin >> id >> n ;
		for(int j=0;j<n;j++){
			cin >> type >> num;
			ids = num+ids;
			if(type == 'A'){
				a = num+a;
			}else if (type== 'B'){
				b = num +b;
			}else {
				c = num+c;
			}
		} 
		cout << id << " " << fixed << setprecision(2) << ids;
		cout << endl;
	}
	cout << "A" << " " << fixed << setprecision(2) << a << endl;
	cout << "B" << " " << fixed << setprecision(2) << b << endl;
	cout << "C" << " " << fixed << setprecision(2) << c << endl;



	// your code goes here
	return 0;
}

