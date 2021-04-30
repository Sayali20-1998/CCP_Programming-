#include<iostream>
using namespace std;
class demo
{
public:
	int i;
	int j;
	const int k ;
demo(int no) : k(no++),j(no++),i(no++)
{
	cout<<"contructor\n";
}
};

int main()
{
   demo obj(10);
  cout <<obj.i<<"\n";
   cout <<obj.j<<"\n";
    cout <<obj.k<<"\n";
	return 0;
}