#include<iostream>
using namespace std;
class circle
{
public:
	float Area(float radius,float PI=3.14)    //pi is default argument
{
	float result= 0.0;
	result = PI*radius*radius;
	return result;
}
};

int main()
{
  circle obj;
  float ret 0.0;

  ret = obj.Area(10.5);
    cout<<ret<<"\n";
 
   ret = obj.Area(10.5,7.2);
   cout<<ret<<"\n";
	return 0;
}