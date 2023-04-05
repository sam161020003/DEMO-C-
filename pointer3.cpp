#include<iostream>
using namespace std;
int *check(int ,int );
int main()
{ 
  
  cout<<check(10,20)<<endl;
	
}
int *check(int i,int j)
{
	int *p=&i;
	int *q=&j;
	if(i>=45)
	{
		return(p);
	}
	else 
	{
		return (q);
	}
}
