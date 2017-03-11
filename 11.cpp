// 11: 字符串插入

// 描述
// 有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。（字符个数不包括字符串结尾处的'\0'。）将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。

// 输入
// 输入包括若干行，每一行为一组测试数据，格式为
// str substr

// 输出
// 对于每一组测试数据，输出插入之后的字符串。

// 样例输入
// abcab eee
// 12343 555

// 样例输出
// abceeeab
// 12345553

// 提示
// 这题有多组输入，请参照第二题的提示依次读入和处理每一组数据。
// 如果使用了字符串函数，比如strlen，请包含cstring头文件 #include <cstring>。


#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char a[11] ,b[4];
	while(cin >> a >> b){
		int maxN = 0;
		int len = strlen(a);
		for(int i=0;i<len;i++){
			if(a[i]> a[maxN]){
				maxN = i;
			}
		}
		cout << maxN <<endl;
		for(int i=0;i<=maxN;i++){
			cout << a[i] ;
		}
		cout << b ;
		for(int i = maxN+1;i<len ;i++){
			cout << a[i];
		}

		cout << endl;
	}

	return 0;
}

