#include<iostream>
using namespace std;

class demo
{
  public:
  	int i;
  	int j;
    
  	demo(int no1,int no2)
    {
      i = no1;
      j = no2;
    }
};
class hello: public demo
{
   public:
    int x,y;
    hello(int no1,int no2)
    {
      x = no1;
      y = no2;
    }
};
int main()
{
	 hello obj(10,20);
	 

	 return 0;
}