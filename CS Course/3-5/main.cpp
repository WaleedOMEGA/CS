#include <iostream>

using namespace std;

int main()
{
    int arr1[10],arr2[10];
cout <<"array1 elements:";
    for(int i=0;i<10;i++){
        cin >> arr1[i];
        arr2[i]=arr1[i];
    }
cout << "Array1: ";

     for(int i=0;i<10;i++){

            cout << arr1[i]<< " ";

        }
        cout <<endl;
    cout << "Array2: ";

     for(int i=0;i<10;i++){

            cout << arr2[i]<<" ";

        }
        cout <<endl;
    return 0;
}
