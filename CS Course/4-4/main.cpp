#include <iostream>
#include <cmath>
using namespace std;

void cube(){
    int num;
    cout << "any number :";
    cin >> num;
    int cube=pow(num,3);
    cout << "Cube of " << num << " =" << " " << cube << endl;
}
int main()
{
    cube();
}
