#include <iostream>

using namespace std;

class GeometricObject
{
public:
    virtual double getParameter()=0;
    virtual double getArea()=0;
};

class Circle:GeometricObject
{
protected:
    double radius;
public:
    Circle()
    {
        radius=5;
    }
    Circle(double r)
    {
        radius=r;
    }
    double getParameter()
    {
        double Parameter=2*3.14*radius;
        return Parameter;
    }
    double getArea()
    {
        double Area=3.14*radius*radius;
        return Area;
    }
};
class Resizable{
public:
virtual void Resize(int percent)=0;
};
class ResizableCircle:Circle,Resizable{
    public:
    ResizableCircle():Circle(){}
    ResizableCircle(double r):Circle(r){}
    void Resize(int percent){
    radius=radius * (percent/100);
    cout<<"Radius = "<<radius<<endl;
    }
};
int main()
{
   Circle ci(3);
   cout<<"area = "<<ci.getArea()<<endl;
   cout<<"parameter = "<<ci.getParameter()<<endl;
   cout<<"================================="<<endl;
   ResizableCircle rc(5);
   rc.Resize(100);

}
