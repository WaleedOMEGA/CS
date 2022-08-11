#include <iostream>

using namespace std;
void printArray(int arr[10])
{
    cout << "Array elements:"<< endl;
    for (int i = 0; i < 10; i++)
    {
                   cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
     printArray(arr1);
    return 0;
}
