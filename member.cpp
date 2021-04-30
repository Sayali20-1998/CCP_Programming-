#include<iostream>
using namespace std;
class demo
{
public:
	int i;
	int j;
	const int k;
demo(int no1,int no2,int no3) : i(no1),j(no2),k(no3)
{
	cout<<"contructor\n";
}
};

int main()
{
   demo obj(10,20,30);
  cout <<obj.i<<"\n";
   cout <<obj.j<<"\n";
    cout <<obj.k<<"\n";
	return 0;
}