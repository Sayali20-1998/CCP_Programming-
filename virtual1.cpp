#include<iostream>
using namespace std;

class base
{
  public:
          int i,j;
          base()
           {
          	i = 10; j = 20;
           }
          void fun()
          {
          	cout<<"basefun\n";             //defination
          }
          void gun()
          {
          	cout<<"basegun\n";             //defination
          }

};
class derived:public base
{
  public:
          int x,y;
          derived()
           {
          	x = 50; y = 60;
           }
          void sun()
          {
          	cout<<"derived sun\n";             //defination
          }
          void gun()
          {
          	cout<<"derived gun\n";             //redefination
          }
};
int main()
{
   base *bp1 = new base;
   derived *dp1 = new derived;

   bp1->fun(); 
   bp1->gun(); 

    dp1->fun(); 
    dp1->gun(); 
    dp1->sun(); 
    dp1->base::gun(); 

    base *bp2 = new derived;
     bp2->fun(); 
     bp2->gun(); 
     bp2-> sun();                                  error
  return 0;
}
