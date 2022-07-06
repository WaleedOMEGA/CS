#include <iostream>

using namespace std;

int main()
{
    int no0fDays,years,weeks,days;
    cout << "Number of Days : " ;
    cin >> no0fDays;
    cout << endl;
    years=no0fDays / 365;
    weeks=(no0fDays - (years * 365))/7;
    days=no0fDays - (years * 365)-(weeks * 7);
    cout << "Years : " <<years << endl;
    cout << "Weeks : " <<weeks << endl;
    cout << "Days : " <<days << endl;
    return 0;
}
