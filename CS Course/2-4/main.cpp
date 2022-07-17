#include <iostream>

using namespace std;

int main()
{
    float n,sum,avg;
    for(int i=1;i<=10;i++){
        cin >> n;
        sum=sum+n;
    }
    avg=sum/10;
    cout << avg << endl;
    return 0;
}
