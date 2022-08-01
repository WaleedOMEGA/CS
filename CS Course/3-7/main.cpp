#include <iostream>

using namespace std;

int main()
{
    int arr1[5],arr2[5];
    cout << "first array elements: ";
    for(int i=0;i<5;i++){
        cin >> arr1[i];
    }
    cout << "second array elements: ";
    for(int i=0;i<5;i++){
        cin >> arr2[i];
    }
    cout << "Merged array in ascending order = " ;
    for(int i=0;i<5;i++){
        cout <<" "<< arr1[i] << " ,";
         cout <<" "<< arr2[i] << " ,";
    }
    return 0;
}
