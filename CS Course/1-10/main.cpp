#include <iostream>

using namespace std;

int main()
{
    int no0fSeconds,hours,minutes,seconds;
    cout << "Input Seconds : " ;
    cin >> no0fSeconds;
    cout << endl;
    hours=no0fSeconds / (60*60);
    minutes=(no0fSeconds - (hours * 60 * 60))/60;
    seconds=no0fSeconds - (hours * 60 * 60)-(minutes * 60);
    cout << "H:M:S -" <<hours <<":"<<minutes <<":"<<seconds << endl;

    return 0;

}
