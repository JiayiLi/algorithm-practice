// 22:二维数组右上左下遍历

// 描述
// 给定一个row行col列的整数数组array，要求从array[0][0]元素开始，按从左上到右下的对角线顺序遍历整个数组。

// 输入
// 输入的第一行上有两个整数，依次为row和col。
// 余下有row行，每行包含col个整数，构成一个二维整数数组。
// （注：输入的row和col保证0 < row < 100, 0 < col < 100）

// 输出
// 按遍历顺序输出每个整数。每个整数占一行。

// 样例输入
// 3 4
// 1 2 4 7
// 3 5 8 10
// 6 9 11 12
// 样例输出
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12

#include <iostream>
using namespace std;

int main() {
	int row,col;
	cin >> row >> col;

	int a[100][100];

	for(int i = 0;i<row;i++){
		for (int j=0;j<col;j++){
			cin >> a[i][j];
		}
	}

	int x=0,y=0;
	for( int i=0;i<row+col-1;i++){
		x = i>col-1?i-col+1:0;
		y = i-x;
		while(x<=row-1&&y>=0){
			cout << a[x][y] << endl;
			x++;
			y--;
		}
	}
	// your code goes here
	return 0;
}
