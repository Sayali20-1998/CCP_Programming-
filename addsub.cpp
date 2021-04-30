#include <iostream>
using namespace std;

class arithematic
{
 public:
 	    int no1;
 	    int no2;

arithematic()
{

 cout<<"inside default consturctor\n";
 no1=0;
 no2=0;
}

arithematic(int i, int j)
{
 cout<<"inside parameterised consturctor\n";
 no1=i;
 no2=j;
}

arithematic(arithematic &obj)
{

cout<<"inside copy consturctor\n";	
}

~arithematic()
{
	cout<<"inside  desturctor\n";
}

int add()
{
  int result= 0;
  result= no1+no2;
	return result;
}
int sub()
{
 int result=0;
 result= no1-no2;
 return result;
}
};

int main()
{
 int x=0, y=0, ret=0;

cout<<"enter first number\n";
cin>>x;
cout<<"enter second number\n";
cin>>y;

arithematic obj1(x,y);

ret=obj1.add();
cout<<"addition is :"<<ret<<"\n";
  
ret =obj1.sub();
cout<<"subtraction is :"<<ret<<"\n";

	return 0 ;
}

 