#include <iostream>

using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    Person(string n="waleed",int a=30)
    {
        setName(n);
        setAge(a);
    }
    void setName(string n)
    {
        name=n;
    }
    string getName()
    {
        return name;
    }
    void setAge(int a)
    {
        age=a;
    }
    int getAge()
    {
        return age;
    }
    virtual void print()
    {
        cout<<"Name = "<<getName()<<endl;
        cout<<"Age = "<<getAge()<<endl;
    }
};

class FixedEmployee:Person
{
protected:
    float salary;
public:
    FixedEmployee():Person()
    {
        salary=3000;
    }
    FixedEmployee(float s,string n,int a):Person(n,a)
    {
        setSalary(s);
    }
    void setSalary(float s)
    {
        salary=s;
    }
    virtual float getSalary()
    {
        return salary;
    }

    void print()
    {
        Person::print();
        cout<<"Salary = "<<getSalary()<<endl;
    }
};
class HourlyEmployee:FixedEmployee
{
private:
    int hours;
    float hoursRate;
public:
    HourlyEmployee():FixedEmployee()
    {
        hours=50;
        hoursRate=200;
    }
    HourlyEmployee(int h,float hr,float s,string n, int a):FixedEmployee(s,n,a)
    {
        hours=h;
        hoursRate=hr;
    }
    void setHours(int h)
    {
        hours=h;
    }
    int getHours()
    {
        return hours;
    }
    void setHoursRate(float hr)
    {
        hoursRate=hr;
    }
    float getHoursRate()
    {
        return hoursRate;
    }
    float getSalary()
    {
        salary=getHours()*getHoursRate();
        return salary;
    }
    void print()
    {
        FixedEmployee::print();
        cout<<"Hours = "<<getHours()<<endl;
        cout<<"Hours Rate = "<<getHoursRate()<<endl;
    }

};
int main()
{
    Person p;
    p.print();
    cout<<"+++++++++++++++++++++++++++++"<<endl;
    FixedEmployee fe(5000,"nada",25);
    fe.print();
    cout<<"+++++++++++++++++++++++++++++"<<endl;
    HourlyEmployee he(100,200,15000,"salma",35);
    he.print();
}
