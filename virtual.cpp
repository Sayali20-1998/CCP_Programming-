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
  base bobj;
  derived dobj;


  bobj.fun();
  bobj.gun();

  dobj.fun();
  dobj.sun();
  dobj.gun();
  dobj.base::gun();                      //method for accessing for base gun
  return 0;
}
