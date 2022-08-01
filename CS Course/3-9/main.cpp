#include <iostream>

using namespace std;

int main()
{
    int rows;

char ch='*';
    cout << "Enter number of rows: ";
    cin >> rows;



    for(int i = 1; i <= rows; i++)
    {
    	for(int j = 1; j <= rows - i; j++)
		{
            cout << " ";
        }
        for(int k = 1; k <= rows; k++)
        {
            cout << ch;
        }
        cout << "\n";
    }
 	return 0;
}
