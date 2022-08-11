#include <iostream>

using namespace std;
void sumArray(int arr[10])
{
    cout << "Sum of array: ";
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
                  sum +=arr[i];
    }
    cout << sum;
}

int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
     sumArray(arr1);
    return 0;
}
