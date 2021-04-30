#include<iostream>
using namespace std;

class demo
{
  public:
  	int i;
  	int j;
  	void fun()
    {
       cout<<"inside fun\n";	
    }
    void gun()
    {
    	 cout<<"inside gun\n";
    }
};

int main()
{
	 demo obj;
	 demo *p=NULL;
	 p=new demo;
     cout<<obj.i<<"\n";
     cout<<p->i<<"\n";
     obj.fun();

     p->fun();

	 return 0;
}