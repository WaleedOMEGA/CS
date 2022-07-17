#include <iostream>

using namespace std;

int main()
{
    int base,exp,result=1;
    cout << "base: ";
    cin>>base;
    cout << "exponent: ";
    cin>>exp;
    for(int i=1;i<=exp;i++){
        result=base*result;
    }
    cout <<base<<"^"<<exp<<"="<<result << endl;
    return 0;
}
