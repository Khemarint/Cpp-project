#include <iostream>
using namespace std;
int main (){
	int x;
	cout<<"                _________________";
	cout<<"\n               |   Heritage List |";
	cout<<"\n              ---------------------";
	cout<<"\n\n       1.       Angkor Wat Temple ";
	cout<<"\n\n       2.    Rorbam Preah reachea trab  ";
	cout<<"\n\n       3.       lakhoun Sbeak Thom      ";
	cout<<"\n\n       4.       Preah Vihea Temple  ";
	cout<<"\n\n       5.    Prolai Pouch Sas Museum  ";
	cout<<"\n\n       6.         Ream Keh Story   ";
	cout<<"\n\n       7.        Teanh Prat Game  ";
	cout<<"\n\n       8.        Chapei Dong Vek  ";
	cout<<"\n\n       9.      Sombo Preikok Temple ";
	cout<<"\n\n       10.         Lakhoun Khoul  ";
	while(true)
	{
		cout<<"\n\n       =>  Please enter Number of Heritage:";
		cin>>x;
		if(x==1)
		{
			cout<<"\n       1. Date Heritage of Angkor Wat Temple is 14/12/1992.";
		}
		else if(x==2)
		{
			cout<<"\n       2. Date Heritage of Rorbam Preah reachea trab is 7/11/2003.";
		}
		else if(x==3)
		{
			cout<<"\n       3. Date Heritage of Lakhoun Sbeak Thom is 25/11/2005.";
		}
		else if(x==4)
		{	
			cout<<"\n       4. Date Heritage of Preah Vihea Temple is 7/7/2008.";
		}
		else if(x==5)
		{
			cout<<"\n       5. Date Heritage of Prolai Pouch Sas Museum is 31/7/2009.";
		}
		else if(x==6)
		{
			cout<<"\n       6. Date Heritage of Ream Keh Story is 15/4/2014.";
		}
		else if(x==7)
		{
			cout<<"\n       7. Date Heritage of Teanh Prat Game is 2/12/2015.";
		}
		else if(x==8)
		{
			cout<<"\n       8. Date Heritage of Chapei Dong Vek is 30/11/2016.";
		}
		else if(x==9)
		{
			cout<<"\n       9. Date Heritage of Sombo Prei Kok Temple is 8/7/2017.";
		}
		else if(x==10)
		{
		cout<<"\n       10. Date Heritage of Lakhoun Khoul is 28/11/2018.";
		}
	}
	
	return 0;
}