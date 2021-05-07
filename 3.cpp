#include<iostream>
#include<cmath>
using namespace std;

class calculation
{

public:
		float I,N,P;
		float SUM;
		
		
		int getvalue()
		{	 
			cout<<endl<<"Enter Principle Amount :";
			cin>>P;
			cout<<endl<<"Enter Number of Year  :";
			cin>>N;
			cout<<endl<<"Enter Rate of Amount  :";	  
			cin>>I;
			
			SUM=P*pow(1+I/100,N);	 	 
		}
		
		
		int imprint()
		{
			
		cout<<endl<<"Principle Amount :"<<P;
		cout<<endl<<"Number of Year	  :"<<N;
		cout<<endl<<"Rate of Amount   :"<<I;
		
		cout<<endl<<"Interest	  	  :"<<SUM;
		
		
		
		
		
		}



};
int main()
{
calculation exe;
exe.getvalue();
exe.imprint();

}

