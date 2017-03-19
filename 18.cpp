// 18:单词翻转

// 描述
// 输入一个句子（一行），将句子中的每一个单词翻转后输出。

// 输入
// 只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。所谓单词指的是所有不包含空格的连续的字符。
// 这道题请用cin.getline输入一行后再逐个单词递归处理。

// 输出
// 翻转每一个单词后的字符串，单词之间的空格需与原文一致。

// 样例输入
// hello    world.

// 样例输出
// olleh    .dlrow


#include <iostream>
using namespace std;

char a[501];
int i=0;
int rever (){
	char c = a[i];
	i++;
	if(c == ' '){
		return 1;
	}else if(c !='\0'){
		rever();
		cout << c;
	}
	return 1;
}


int main() {
	cin.getline(a,501);

	if(rever() == 1) {
		cout << ' ';
	}
	
	while(a[i] != '\0'){
		if(rever() == 1){
			cout<< ' ';
		}
	}

	if(a[i] == '\0'){
		cout << endl;
	}
	// your code goes here
	return 0;
}