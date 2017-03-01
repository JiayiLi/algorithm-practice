// 3:最长单词2

// 总时间限制: 1000ms 内存限制: 65536kB

// 描述
// 一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式，求句子中的最长单词。

// 输入
// 一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式。

// 输出
// 该句子中最长的单词。如果多于一个，则输出第一个

// 样例输入
// I am a student of Peking University.

// 样例输出
// University



#include <iostream>
using namespace std;

int main(){
	char str[500],word[50];
	cin.getline(str,500);
	int count =0,currMax=0;
	for (int i=0;i<500;i++){
		if(str[i] == ' '||str[i]=='.') {
			if(count > currMax){

				currMax = count;
				for(int j = 0;j<count;j++){
					word[j]=str[i-count+j];
				}
			}
			count = 0;
		}else {
			count ++ ;
		}

	}
	cout << word <<endl;
	return 0;
}