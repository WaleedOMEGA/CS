#include <iostream>

using namespace std;

void circle(){
float radius,diameter, circumference,area;
float PI=3.1416;
    cout << "radius: ";
    cin >> radius;
    diameter=2 * radius;
    cout << "Diameter = " << diameter << " " << "units"<<endl;
    // Circumference of Circle = 2 X PI x Radius
    circumference = 2*PI*radius;
    cout << "Circumference = " << circumference << " " << "units"<<endl;
    area=PI*radius*radius;
    cout << "Area = " << area << " " << "sq. units"<<endl;
}
int main()
{
    circle();
}
