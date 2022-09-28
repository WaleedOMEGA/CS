#include <iostream>
#include <cctype>
using namespace std;

// person
class Person
{
protected:
    int id;
    string name, password;
    double balance;
public:
    Person()
    {
        id=0;
        name="No - Name";
        password="No - Password";
        balance=0;
    }
    Person(int i,string n,string p,double b)
    {
        id=i;
        name=n;
        password=p;
        balance=b;
    }
    //Setters:
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
    void setBalance(double balance)
    {
        this->balance = balance;
    }

    //Getters:
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getPassword()
    {
        return password;
    }
    double getBalance()
    {
        return balance;
    }

    void display()
    {
        cout << "ID Number:" << getId() << endl;
        cout << "User Name:" << getName() << endl;
        cout << "Password:" << getPassword() << endl;
        cout << "Balance:" << getBalance() << endl;
    }


};
//validation
class Validation
{
public:
    bool static checkName(string name)
    {
        if(name.length() >=5 && name.length() <=20)
        {
            int l=name.length();
            for (int i = 0; i < l; i++)
            {
                if(!isalpha(name[i]))
                {
                    cout<<"name must be all alphabetic chars"<<endl;
                    break;
                    return false;
                }
            }
            return true;
        }
        else
        {
            cout<<"Name must be between 5 & 20 in size"<<endl;
            return false;
        }
    }

    bool static checkPassword(string password)
    {
        if(password.length() >=8 && password.length() <=20)
        {

            return true;
        }
        else
        {
            cout<<"Password must be between 8 & 20 in size"<<endl;
            return false;
        }
    }

    bool static checkSalary(double salary)
    {
        if(salary <5000)
        {
            cout<<"salary must be minimum 5000"<<endl;
            return false;
        }
        else
        {
            return true;
        }
    }

    bool static checkBalance(double balance)
    {
        if(balance <1500)
        {
            cout<<"balance must be minimum 1500"<<endl;
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{
    Person p;
    p.display();
    Validation::checkName("wwdddsddsdsdsdsdsdsdsdsdsdsdsdsdsdsdsdsdsdssdddw");
    Validation::checkPassword("ww1dsw");
    Validation::checkBalance(200);
    Validation::checkSalary(20000);
}
