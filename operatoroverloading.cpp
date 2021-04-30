/*#include<iostream>
using namespace std;

class demo
{
	
public:
	int i,j;
	demo(int x=10,int y=20)
	{
		i=x; j=y;
	}
	friend demo operator + (demo,demo);
};

demo operator + (demo op1 , demo op2)
{
	cout<<"inside binary + operato\n";
	return demo(op1.i + op2.i, op1.j + op2.j);
}

int main()
{
	demo obj1(5,7);
	demo obj2(3,2);

	demo ret(0,0);

	ret = obj1 + obj2;              //+(obj1,obj2)

 cout<<ret.i<<"\t"<<ret.j<<"\n";
	return 0;
}*/           

#include<iostream>
using namespace std;

class Demo
{
public:
    int i,j;
    Demo(int x = 10, int y = 20)
    {
        i = x;  j = y;
    }
    friend Demo operator +(Demo, Demo);
    friend Demo operator *(Demo, Demo);
     friend bool operator ==(Demo, Demo);
};

Demo operator +(Demo op1, Demo op2)
{
    cout<<"Inside binary + operator\n";
    return Demo(op1.i + op2.i, op1.j + op2.j);
}
Demo operator *(Demo op1, Demo op2)
{
    cout<<"Inside binary * operator\n";
    return Demo(op1.i * op2.i, op1.j * op2.j);
}
bool operator ==(Demo op1, Demo op2)
{
    cout<<"Inside binary == operator\n";

    if((op1.i==op2.i)&&(op1.j==op2.j))
    {
    	return true;
    }
    else
    {
    	return false;
    }
    
}
int main()
{
    Demo obj1(5,3);
    Demo obj2(5,3);
    Demo ret1(0,0);
    Demo ret2(0,0);
    ret1 = obj1 + obj2;      
    cout<<ret1.i<<"\t"<<ret1.j<<"\n";
    ret2 = obj1 * obj2;      
    cout<<ret2.i<<"\t"<<ret2.j<<"\n";
 if(obj1==obj2)
 {
 	cout<<"objects are equal\n";
 }
   else
   {
   		cout<<"objects are diffrent\n";
   } 
        return 0;
}
