#include<iostream>
using namespace std;
class bank
{
public:
void dispalyinformation()
{

}
int amount()
{
	int ret = calculateinterest();
    ret=ret +100;
    return ret;
}
private:
    void calculateinterest();
   {

   } 
};




int main()
{
  
bank obj;
obj.amount();
cout<<ret"\n";

	return 0;
}