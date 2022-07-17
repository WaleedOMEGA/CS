#include <iostream>

using namespace std;

int main()
{
    int n,mul;
    cin >> n;
    for(int i=1;i<=12;i++){
        mul=i*n;
        cout<<i<<"*"<<n<<"="<<mul<<endl;
    }
    return 0;
}
