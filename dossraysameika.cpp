#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,deltar,x1,x2;
	cout<<"Please Enter the value"<<endl;
	cout<<"if a = ";
	cin>>a;
	cout<<"if b = ";
	cin>>b;
	cout<<"if c = ";
	cin>>c;
	deltar = pow(b,2)-4*a*c;
	if(deltar>0)
	{
		x1= -b/2*a + sqrt(deltar)/(2*a);
		x2= +b/2*a + sqrt(deltar)/(2*a);
		cout<<"It has 2 different answer"<<endl;
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
	}
	else if(deltar==0)
	{
		x1=-b/2*a;
		cout<<"It has 1 answer"<<endl;
		cout<<"x1 = x2 = "<<x1<<endl;
	}
	else
	{
		cout<<"It has no root";
	}
	
	return 0;
}