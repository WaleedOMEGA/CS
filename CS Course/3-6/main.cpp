#include <iostream>

using namespace std;

int main()
{
    int arr[10],repeat=0;
    cout <<"array elements: ";
    for (int i=0;i<10;i++){
        cin >> arr[i];
    }
    cout << "All unique elements in the array are: " ;
    for(int i=0;i<10;i++){
            repeat=0;
        for (int j=0;j<10;j++){
            if(arr[i]==arr[j]){
                repeat=repeat+1;
            }
        }
        if(repeat<2){
            cout <<" "<< arr[i] << " ,";
        }
    }
    cout <<endl;
    return 0;
}
