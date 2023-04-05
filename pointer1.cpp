//READ pg 14 of pointers and try static method also.
// the below method is also working because fun() is called again hence it gives the value of i in second cout.
#include<iostream>
using namespace std;
int *fun();
int main()
{
cout<<fun()<<endl;
cout<<*fun()<<endl;
return 0;
}
int *fun()
{
	int i=20;
	return(&i);
}
