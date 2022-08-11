#include <iostream>
#include<algorithm>
using namespace std;
void maxArray(int arr[10])
{
    cout << "Maximum element = ";
    int maximum=0;
    for (int i = 0; i < 10; i++)
    {

          maximum=max(maximum,arr[i]);
    }
    cout << maximum;
}

int main()
{
    int arr1[10]={5, 1, 6, 10, 2, 3, 6, 50, -7, 4};
     maxArray(arr1);
    return 0;
}
