#include <iostream>

using namespace std;

int main()
{
    int arr[9],even=0,odd=0;
    for(int i=0;i<9;i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }

    }
    cout << "Total Even elements: "<<even  << endl;
    cout << "Total Odd elements: "<<odd  << endl;
    return 0;
}
