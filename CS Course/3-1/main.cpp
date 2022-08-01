#include <iostream>

using namespace std;

int main()
{
        int i,j,rows;
    char ch='*';
    cout<<"rows:\n";
    cin>>rows;
    cout<<"\n";
    for(i=1; i<=rows;  i++){
        for(j=1; j<=i; j++){

            if(j==1 || j==i || i==rows){
            cout<<ch;
             }
             else{
               cout<<" ";
    }
}
cout<<"\n";
    }
    return 0;
}
