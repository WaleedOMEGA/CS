#include <iostream>

using namespace std;

class Time{
private:
    int hour,minute,second;
public:
    Time (int hour,int minute,int second):hour(hour),minute(minute),second(second){
    }
int getHour(){
    return hour;
    }
    int getMinute(){
    return minute;
    }
    int getSecond(){
    return second;
    }
    void setHour(int h){
    hour=h;
    }
    void setMinute(int m){
    minute=m;
    }
    void setSecond(int s){
    second=s;
    }
    void setTime (int h,int m,int s){
        hour=h;
        minute=m;
        second=s;
    }
    int nextSecond() {
		second++;
		if (second >= 60) {
			minute++;
			second = 00;
		}
		if (minute >= 60) {
			hour++;
			minute = 00;
		}
		if (hour >= 24)
			hour = 00;
		return second;
	}
	int previousSecond() {
		second--;
		if (second <= 0) {
			minute--;
			second = 59;
		}
		if (minute <= 0) {
			hour--;
			minute = 59;
		}
		if (hour <= 0) {
			hour = 23;
		}
		return second;
	}
};

int main()
{
    Time today (8,20,15);
    cout << today.getHour() << endl;
    today.setHour(10);
    cout << today.getHour() << endl;
    today.nextSecond();
	cout << today.getHour() << " : " << today.getMinute() << " : " << today.getSecond() << endl;
	    today.previousSecond();
	cout << today.getHour() << " : " << today.getMinute() << " : " << today.getSecond() << endl;
    return 0;
}
