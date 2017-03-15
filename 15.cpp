// 15:Tomorrow never knows？

// 描述
// 甲壳虫的《A day in the life》和《Tomorrow never knows》脍炙人口，如果告诉你a day in the life,真的会是tomorrow never knows?相信学了计概之后这个不会是难题，现在就来实现吧。
// 读入一个格式为yyyy-mm-dd的日期（即年－月－日），输出这个日期下一天的日期。可以假定输入的日期不早于1600-01-01，也不晚于2999-12-30。

// 输入
// 输入仅一行，格式为yyyy-mm-dd的日期。

// 输出
// 输出也仅一行，格式为yyyy-mm-dd的日期

// 样例输入
// 2010-07-05

// 样例输出
// 2010-07-06

// 提示
// 闰年的标准：
// (1)普通年能被4整除且不能被100整除的为闰年。（如2004年就是闰年,1901年不是闰年）
// (2)世纪年能被400整除的是闰年。(如2000年是闰年，1100年不是闰年)
// 可以利用一个字符变量吃掉输入的短横线（减号），输出时请活用setfill和setw 控制符。

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int year, month, day;
	char a, b;
	cin >> year >> a >> month >> b >> day;
		bool leap = false;//这个用来判断闰年，之前有题目写了这个，这里不多说
		bool special=false;//这里标记输入天数是否跨月，跨年，因为那些要特殊处理，其他的只要天数加1就好
		if (year % 4 == 0 & year % 100 != 0)
			leap = true;
		if (year % 400 == 0)
			leap = true;
		if (month == 2) {//对二月进行处理，注意闰年
			if (leap == true && day == 29) {
				month++;
				day = 1;
				special = true;
			}
			if (leap == false && day == 28) {
				month++;
				day = 1;
				special = true;
			}
		}
		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day == 31)) {//对大月进行处理 
			if (month == 12) {//其中12月跨年，单独处理
				month = 1;
				day = 1;
				year++;
				special = true;
			}
			else {//其他的跨月
				day = 1;
				month++;
				special = true;
			}
		}
		if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {  //然后对小月进行处理
			day = 1;
			month++;
			special = true;
		}
		if (special == false)//对不特殊的进行处理
			day++;
		cout << year << '-' << setw(2)<<setfill('0') << month << '-' << setw(2) << setfill('0') << day << endl;//其中setw（）设置输出宽度，setfill（）用来进行填补宽度。
		return 0;
}

