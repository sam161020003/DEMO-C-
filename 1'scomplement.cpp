#include<iostream>
#include<string.h>
using namespace std;
class binary
{   public:
	int n;
	string s;
    void enter()
		{
			cout<<"enter the number"<<endl;
			cin>>s;
		}
		void check()
		{  for(int i=0;i<s.length();i++)
		    {
              if(s.at(i)!='0' && s.at(i)!='1')
			     {
			  	cout<<"invalid binary number"<<endl;
	    		  }			
			}			
			
		}
		void calulcate()
		{
		 check();    //calling member function
		 for(int i=0;i<s.length();i++)
		 {
		 	if(s.at(i)=='0')
		 	{
		 		s.at(i)='1';
			 }
			 else
			 {
			 	s.at(i)='0';
			 }
		 }
		}
		
		void display()
		{
			cout<<s<<endl;
		}
};
decToBinary(int n)
{
    int binaryNum[32];
	int i = 0;
	while (n > 0) 
	{
	binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}
int main()
{   decToBinary(333);
	binary ob;
	ob.enter();
	ob.calulcate();
	ob.display();
}
