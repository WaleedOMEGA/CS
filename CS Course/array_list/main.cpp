#include <iostream>

using namespace std;

template <class T>
class ArrayList
{
private:
    T* arr;
    int cap;
    int numOfItems;
    void expand()
    {
        cap *=2;
        T* temp = new T[cap];
        for(int i=0; i<numOfItems; i++)
        {
            temp[i]=arr[i];
        }
        delete arr;
        arr=temp;
    }
public :
    ArrayList()
    {
        cap=2;
        numOfItems=0;
        arr= new T[cap];
    }

    ~ArrayList()
    {
        delete []arr;
    }

    void addToLast(T value)
    {
        if(numOfItems == cap)
        {
            expand();
        }
        arr[numOfItems]=value;
        numOfItems++;
    }

    void removeFromLast()
    {
        numOfItems--;
    }

    void addToFirst(T value)
    {
        if(numOfItems ==  cap)
        {
            expand();
        }
        for(int i=numOfItems-1; i>=0; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=value;
        numOfItems++;
    }

    void removeFromFirst()
    {
        for(int i=0; i<numOfItems-1; i++)
        {
            arr[i]=arr[i+1];
        }
        numOfItems--;
    }

    bool search(T value)
    {
        for(int i=0; i<numOfItems; i++)
        {
            if(arr[i]== value)
            {
                return true;
            }
        }
        return false;
    }
    void print()
    {
        for(int i=0; i<numOfItems; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void setCap(int cap)
    {
        this->cap=cap;
    }
};






int main()
{
    ArrayList<int> myList;
    myList.addToLast(10);
    myList.addToLast(20);
    myList.addToLast(30);
    myList.addToLast(40);
    myList.addToLast(50);
    myList.addToLast(60);
    myList.addToLast(70);
    myList.print();
    cout<<myList.search(70)<<endl;
    myList.removeFromLast();
    myList.print();
    cout<<myList.search(70)<<endl;
}
