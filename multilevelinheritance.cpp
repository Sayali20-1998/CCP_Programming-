#include<iostream>
using namespace std;

class Demo
{
public:
    int i,j;
    Demo() { cout<<"Inside Demo Constructor\n";}
    ~Demo(){ cout<<"Inside Demo Destructor\n";}
    int Add(int no1,int no2) {return no1 + no2;}
};
// Single level inheritance
class Hello : public Demo   // Inheritance  class Hello extends Demo
{
public:
    int x,y;
    Hello() { cout<<"Inside Hello Constructor\n"; }
    ~Hello() { cout<<"Inside Hello Destructor\n"; }
    int Sub(int no1,  int no2) { return no1 - no2;}
};
 class maths:public Hello
 {
 public:
    int a;
    maths() { cout<<"Inside maths Constructor\n"; }
    ~maths() { cout<<"Inside maths Destructor\n"; }
    int mult(int no1,int no2)
    {return no1*no2;}   
};
int main()
{
    Demo dobj;
    cout<<sizeof(dobj)<<"\n";
    cout<<dobj.Add(10,12)<<"\n";
    
    Hello hobj;
    cout<<sizeof(hobj)<<"\n";
    cout<<"addition is : "<<hobj.Add(10,20)<<"\n";

    maths mobj;
    cout<<sizeof(mobj)<<"\n";
    cout<<mobj.Sub(20,20)<<"\n";
    
    return 0;
}