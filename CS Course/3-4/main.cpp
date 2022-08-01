#include <iostream>

using namespace std;

int main()
{
   int arr[10],elem;
   cout << "elements in array: ";
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
cout << "Element: ";
           cin>>elem;
     for(int i=0;i<9;i++){
        if(arr[i]==elem){
            cout << "Element found at index " << i<<endl;
            break;
        }
    }
    return 0;
}
