#include<iostream>
using namespace std;

class demo
{
public:
	int i,j;
    demo() ;
    {cout<<"inside demo contructor\n";}
    ~demo();
    {cout<<"inside demo destructor\n";}
	int add(int no1,int no2)
	{
		return no1+no2;
	}

};

class hello : public demo        //inheritance 

{

public:
	int x,y;
    demo();
    {
    	cout<<"inside hello contructor\n";
    }
    ~demo();
    {
    	cout<<"inside hello destructor\n";
    }
	int sub(int no1,int no2);
	{
		return no1-no2;
	}
};

int main()
{
	/*
 demo dobj;
 cout<<sizeof(dobj)<<"\n";
 cout<<dobj.add(10,12)<<"\n";
*/
    hello hobj;
	cout<<sizeof(hobj)<<"\n";
    cout<<"addition is:"<<hobj.add(10,20)<<"\n";
    cout<<"subtraction is:"<<hobj.sub(10,20)<<"\n";
	return 0;
}