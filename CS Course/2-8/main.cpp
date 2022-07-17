#include <iostream>

using namespace std;

int main()
{
    int n,max=0;
    cin>>n;
    while(n>0){
        if(n>max)
            max=n;
        cin>>n;
    }
    cout << max << endl;
    return 0;
}
