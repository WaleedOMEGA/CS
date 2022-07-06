#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    if(num % 3 ==0 && num % 4 ==0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
