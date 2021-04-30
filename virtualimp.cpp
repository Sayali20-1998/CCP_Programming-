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
          void fun()                          //1000
          {
          	cout<<"basefun\n";             //defination
          }
          virtual void gun()                //2000
          {
          	cout<<"basegun\n";             //defination
          }
          virtual void run()               //3000
          {
            cout<<"base run\n";             //redefination
          }
           virtual void mun()              //4000
          {
            cout<<"base mun\n";             //redefination
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
           void fun()                           //5000
          {
            cout<<"derived fun\n"; 
          } 
                
          void sun()                            //6000
          {
          	cout<<"derived sun\n";             //defination
          } 
           void gun()                           //7000
          {
          	cout<<"derived gun\n";             //redefination
          }
           void run()                          //8000
          {
            cout<<"derived run\n";             //redefination
          }
           void bun()                          //9000
          {
            cout<<"derived bun\n";             //redefination
          }
};
int main()
{
  cout<<"size of base class is :"<<sizeof(base)<<"\n";

  cout<<"size of derived class is :"<<sizeof(derived)<<"\n";

  base *bp2 = new derived;
 
  bp2->fun();
  bp2->gun();
  //bp2->sun();
  bp2->mun();
  bp2->run();
 // bp2->bun();

  return 0;
}

