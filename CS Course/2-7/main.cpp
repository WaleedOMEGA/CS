#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    while(n>0){
        sum=sum+n;
        cin>>n;
    }
    cout << sum << endl;
    return 0;
}
