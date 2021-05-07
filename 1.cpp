#include<iostream>
using namespace std;


class calculation
{

public:
	int c;
	int a;
	int b;
		
	
		int calcul()
		{
	
		cout<<"Enter Value of A :"<<endl;
		cin>>a;
		
		cout<<endl;
		cout<<"Enter Value of B :"<<endl;
		cin>>b;
		
		c=a%b;
		}
		
		
	
		
		int cal()
		{
		
		cout<<endl<<"Value Of A :"<<a;
		cout<<endl<<"Value Of B :"<<b;
		cout<<endl<<"Remaining  :"<<c;
		
		}
		

};


int main()
{
calculation exe;

exe.calcul();
exe.cal();

}

