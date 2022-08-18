#include <iostream>

using namespace std;

int avg(int arr[5]){
    int sum=0,avg=0;
for(int i=0 ; i<5;i++){
    sum+=arr[i];
}
avg=sum/5;
return avg;
}
int main()
{
    int arr1[5]={1,2,3,4,5};
    cout << avg(arr1) << endl;
    return 0;
}
