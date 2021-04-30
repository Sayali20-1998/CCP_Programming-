#include<iostream>
using namespace std;
/*void fun();
int main()
{
     std:: cout<<"jay ganesh..\n";

     
     cout<<"c++ prgram..\n";
     fun();
	return 0;
}

void fun()
{
	cout<<"demo..\n";
}
*/


namespace                  //unnamed namespace,anonymous namespace

{
	class demo
	{
		void fun()
		{cout<<"inside fun..\n";}
	}
}
int main()
{
	demo obj;
	obj.fun();
	return 0;
}