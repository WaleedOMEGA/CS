#include <iostream>

using namespace std;

template <class T>;
class ArrayList{
private:
    T* arr;
    int cap;
    int numOfItems;
public :
    ArrayList(){
        cap=2;
        numOfItems=0;
        arr= new T[cap];
    }

    ~ArrayList(){
    delete []arr;
    }
};






int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
