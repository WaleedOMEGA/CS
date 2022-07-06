#include <iostream>

using namespace std;

int main()
{
    int num,num2,num3,Min,Max;
    cout << "enter first number " ;
    cin >> num;
    Max=num;
    Min=num;
    cout << "enter second number " ;
    cin >> num2;
     if(num2 > Max)
        Max=num2;
    if(num <Min)
        Min=num2;
    cout << "enter third number " ;
    cin >> num3;
     if(num3 > Max)
        Max=num3;
    if(num3 <Min)
        Min=num3;
    cout << "Max element : " << Max << endl;
    cout << "Min element : " << Min << endl;
    return 0;
}
