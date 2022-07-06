#include <iostream>

using namespace std;

int main()
{
    int Num,Num2,Num3,Num4,Num5,Result;
    Result=0;
    cout << "the first number :" ;
    cin >> Num;
    if(Num % 2 !=0)
        Result=Result + Num;
    cout << "the second number : " ;
    cin >> Num2;
    if(Num2 % 2 !=0)
        Result=Result + Num2;
    cout << "the third number : " ;
    cin >> Num3;
    if(Num3 % 2 !=0)
        Result=Result + Num3;
     cout << "the fourth number : " ;
    cin >> Num4;
    if(Num4 % 2 !=0)
        Result=Result + Num4;
     cout << "the fifth number : " ;
    cin >> Num5;
    if(Num5 % 2 !=0)
        Result=Result + Num5;
    cout << "Sum of All Odd Values is " << Result << endl;
    return 0;


}

