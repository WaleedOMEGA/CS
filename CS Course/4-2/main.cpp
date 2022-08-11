#include <iostream>

using namespace std;

float avg(int x,int y,int z){
    float sum = x+y+z;
    float avg=sum/3;
return avg;
}
int main()
{
    cout << avg(2,3,5) << endl;
    return 0;
}
