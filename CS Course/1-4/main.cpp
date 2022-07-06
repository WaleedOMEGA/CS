#include <iostream>

using namespace std;

int main()
{
    int width,height,perimeter,area;
    cout << "Width = " ;
    cin >> width;
    cout << endl;
    cout << "Height = " ;
    cin >> height;
    cout << endl;
    perimeter=width+height;
    area=width * height;
    cout << "the Perimeter = " <<perimeter << endl;
    cout << "the Area = " <<area << endl;
    return 0;
}
