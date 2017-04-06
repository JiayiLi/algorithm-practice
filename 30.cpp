// 30:走出迷宫

// 描述
// 当你站在一个迷宫里的时候，往往会被错综复杂的道路弄得失去方向感，如果你能得到迷宫地图，事情就会变得非常简单。
// 假设你已经得到了一个n*m的迷宫的图纸，请你找出从起点到出口的最短路。

// 输入
// 第一行是两个整数n和m(1 <= n,m <= 100)，表示迷宫的行数和列数。
// 接下来n行，每行一个长为m的字符串，表示整个迷宫的布局。字符'.'表示空地，'#'表示墙，'S'表示起点,'T'表示出口。

// 输出
// 输出从起点到出口最少需要走的步数。(你不能起出迷宫外)

// 样例输入
// 3 3
// S#T
// .#.
// ...

// 样例输出
// 6

#include <iostream>
using namespace std;

int main() {

	int n,m;
	cin >> n >> m;


	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == '#'){
				continue;
			}else if(a[i][j] == '.') {
				count ++;
				if(a[i][j] == 'T'){
					break;
				}
			}
		}
	}


	// your code goes here
	return 0;
}












