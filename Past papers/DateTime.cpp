#include<iostream>
using namespace std;
class DateTime {
	int day,month, year, hour, min, sec;
public:
	DateTime(){}
	void seValue(int d, int mth, int yr) {
		day = d;
		month = mth;
		year = yr;
	}
	void seValue(int d, int mth, int yr,int hr) {
		day = d;
		month = mth;
		year = yr;
		hour = hr;
	}
	void seValue(int d, int mth, int yr, int hr,int m) {
		day = d;
		month = mth;
		year = yr;
		hour = hr;
		min = m;
	}
	void seValue(int d, int mth, int yr, int hr, int m,int s) {
		day = d;
		month = mth;
		year = yr;
		hour = hr;
		min = m;
		sec = s;
	}

};
int main() {
	DateTime d;
	d.seValue(3, 4, 2004);
	d.seValue(3, 4, 2004,5);
	d.seValue(3, 4, 2004,4,30);
	d.seValue(3, 4, 2004,2,40,23);
	}
