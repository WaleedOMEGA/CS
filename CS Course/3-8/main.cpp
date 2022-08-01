#include <iostream>

using namespace std;

int main()
{
    int row;
    char ch='*';
    cout <<"rows: ";
    cin >>row;
     for(int i=1; i<=row; i++)
     {
           /* Print leading spaces */
           for(int j=i; j<row; j++)
           {
                cout<<" ";
           }

           /* Print star */
           for(int j=1; j<=(2*i-1); j++)
           {
                cout<<ch;
           }

           /* Move to next line */
           cout<<"\n";
     }

    return 0;
}
