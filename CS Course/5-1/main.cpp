#include <iostream>

using namespace std;

class Date{
private:
    int day,month,year;
public:
    Date (int day,int month,int year):day(day),month(month),year(year){
    }

    int getDay(){
    return day;
    }
    int getMonth(){
    return month;
    }
    int getYear(){
    return year;
    }
    void setDay(int d){
		day = d;
	}
	void setMonth(int m){
		month = m;
	}
	void setYear(int y){
		year = y;
	}
	void setDate(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
};


int main()
{
    Date birth(1,12,1987);
   cout<<birth.getDay()<<endl;
	cout<<birth.getMonth()<<endl;
	cout<<birth.getYear()<<endl;
	birth.setDate(26,6,2020);
}
