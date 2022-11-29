#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout<<"     _______________________";
	cout<<"\n     | Guess Birthday Game |\n";
	cout<<"     -----------------------\n\n";
	int Day_birth , Month_birth , Year_birth , Day_present , Month_present , Year_present;
	int Day_Age , Month_Age , Year_Age , Day_remain , Month_remain ;
	char reply;
	while(true)
	{
		cout<<"\n>>  Please Enter Your Birthday: \n";
		cout<<">>  Day: ";
		cin>>Day_birth;
		cout<<">>  Month: ";
		cin>>Month_birth;
		cout<<">>  Year: ";
		cin>>Year_birth;
		cout<<"\n>>  Please Enter Your Current's Day: \n";
		cout<<">>  Day: ";
		cin>>Day_present;
		cout<<">>  Month: ";
		cin>>Month_present;
		cout<<">>  Year: ";
		cin>>Year_present;
		Day_Age=Day_present-Day_birth;
		Month_Age=Month_present-Month_birth; 
		
		// Your remaining Birthday.
		
		if(Day_Age<0&&Month_Age<0)
		{
			Day_remain=Day_birth-Day_present;
			Month_remain=Month_birth-Month_present;
			if(Day_remain==1&&Month_remain==1)
			{
				cout<<"\nYour Birthday is remaining: "<<Day_remain<<" day , "<<Month_remain<<"month.\n";
			}
			else
			{
				cout<<"\nYour Birthday is remaining: "<<Day_remain<<" days , "<<Month_remain<<"months.\n";
			}
		}
		
		// Your overing Birthday.
		
		else if(Day_Age>=0&&Month_Age>=0)
		{
			if(Day_Age==1&&Month_Age==1)
			{
				cout<<"\nYour birthday is over: "<<Day_Age<<" day , "<<Month_Age<<" month.\n";
			}
			else
			{
				cout<<"\nYour birthday is over: "<<Day_Age<<" days , "<<Month_Age<<" months.\n";
			}
		}
		if(Day_Age==0&&Month_Age==0)
		{
			cout<<"       ___________________";
			cout<<"\n       | Happy Birthday! |\n";
			cout<<"      --------------------\n";
		}
		
		// Your Current Age.
		
		Year_Age=Year_present-Year_birth;
		cout<<"\nYour current age is: "<<Year_Age<<" year's old.\n";
		
		// Reply to Play or Stop.
		
		cout<<"\n>> Do you want to play more?\n";
		cout<<"       >> Y << or >> N << \n";
		cout<<">> Please Input: ";
		cin>>reply;
		if(reply=='Y')
		{
			cout<<"\n   :> Here you go again <:\n";
		}
		else if(reply=='N')
		{
			cout<<"\n   :> Farewell My friend <:\n";
			break;
		}
	}
	return 0;
}