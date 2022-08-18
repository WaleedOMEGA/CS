#include <iostream>

using namespace std;

void swap(int x,int y){
int z=y;
y=x;
x=z;
cout << "x=" << x <<endl;
cout << "y=" << y <<endl;
}
int main()
{
    int x=5,y=6;
    swap(x,y);

}
