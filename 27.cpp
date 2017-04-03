// 27:字符串中次数第2多的字母

// 描述
// 输入一串长度不超过500个符号的字符串，输出在串中出现第2多的英语字母(大小写字母认为相同)和次数（如果串中有其它符号，则忽略不考虑）。如果有多个字母的次数都是第2多，则按串中字母出现的顺序输出第1个。
// 例 ab&dcAab&c9defgb
// 这里，a 和 b都出现3次，c和d都出现2次，e、f 和 g 各出现1次，其中的符号&和9均忽略不考虑。因此，出现第2多的应该是 c 和 d，但是 d 开始出现的位置在 c 的前面，因此，输出为
// D+d:2
// (假定在字符串中，次数第2多的字母总存在)

// 输入
// 一个字符串

// 输出
// 大写字母+小写字母:个数

// 样例输入
// ab&dcAab&c9defgb

// 样例输出
// D+d:2


#include <iostream>
using namespace std;

char toLower (char ch){
	if(ch >= 'a' && ch <= 'z'){
		return ch;
	}else if(ch >= 'A' && ch <= 'Z'){
		return ch - 'A' + 'a';
	}

	return 0;
}

int main() {
 	char str[501] = {};

 	int count[26] = {0};
 	int order[26] = {0};

 	int seq = 0;

 	cin.getline(str, 501);

 	for(int i=0;i<501;i++){
 		if(char ch = toLower(str[i])){
 			int j = ch -'a';
 			count[j] ++;
 			if (order[j] == 0) {
				order[j] = ++seq;
			}
 		}
 	}

 	int max = 0;
 	for(int i=0;i<26;i++){
 		if(count[i]>max){
 			max = count[i];
 		}

 	}

 	for(int i=0;i<26;i++){
 		if(count[i] == max  ){
 			count[i] = 0;
 		}
 	}

 	int secondMax = 0;
 	for(int i=0;i<26;i++){
 		if(count[i]>secondMax){
 			secondMax = count[i];
 		}
 	}

 	int idx = -1;
	for (int i = 0; i < 26; i++) {
		if (count[i] == secondMax) {
			if (idx <=0 || order[idx] > order[i])
				idx = i;
		}
 	}

 	if(idx > 0){
 		char c1 = idx + 'A';
		char c2 = idx + 'a';
		cout << c1 << '+' << c2 << ':' << secondMax << endl;
 	}
	
	// your code goes here
	return 0;
}
