#include<iostream>
using namespace std;

long FACT(int n)
{
	
	if (n==0)
	{
		return 1;
	}
	else 
	{
		return (n*FACT(n-1));
	}
}
int main()
{    int a;
	cout <<"enter the number"<<endl;
	cin>>a;
	cout<<"the factorial of number is "<<FACT(a)<<endl;
}
