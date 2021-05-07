#include<iostream>
using namespace std;


class calculation{
public:
	float p,r,y;
	float sum;


		int getvalue()
		{
		cout<<endl<<"Enter Priniciple Amount:";
		cin>>p;
		cout<<endl<<"Enter Rate Of Amount 	:";
		cin>>r;
	
		cout<<endl<<"Enter Year 	";
		cin>>y;	   
	
		sum=p*r/100*y;
		}
		
		
		
		int imprint()
		{
		cout<<endl<<"Amount  :"<<p;
		cout<<endl<<"Rate    :"<<r;
		cout<<endl<<"Year    :"<<y;
		cout<<endl<<"Interest:"<<sum;
		}

};


int main()
{
calculation exe;

exe.getvalue();
exe.imprint();
}



