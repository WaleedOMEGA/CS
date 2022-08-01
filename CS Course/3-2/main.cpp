#include <iostream>

using namespace std;

int main()
{
     int i,j,rows;
    char ch='*';
    cout<<"rows:\n";
    cin>>rows;
    cout<<"\n";
    for(i=rows; i>=0;  i--){
        for(j=i; j>=1; j--){


            cout<<ch;

               cout<<" ";

}
cout<<"\n";
    }
    return 0;
}
