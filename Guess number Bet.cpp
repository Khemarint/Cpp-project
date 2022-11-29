#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;
int main()
{
	cout<<"         --------------------\n";       
	cout<<"         |Betting Guess Game|\n";
	cout<<"         --------------------\n\n";
	srand(time(0));
	int Dice=rand()%6+1;
	int money=100000;
	int user_guess;
	int bet;
	char reply;
	int money_lend=50000;
	int debt=0;
	cout<<"    Your balance amount is: "<<money<<"\n\n";
	while(true)
	{
		while(true)
		{
			cout<<"\n  => How much do you want to bet: ";
			cin>>bet;
			if(bet>money)
			{
				cout<<"\n   ! You don't have enough money. !\n\n";
				cout<<"        ! Please try again. !\n\n";
			}
			else
			{
				break;
			}
		}
		cout<<"\n  => Please input number: ";
	   	cin>>user_guess;
		if(user_guess==Dice)
		{
			cout<<"         --------------------\n";
			cout<<"         |     You win.     |\n";
			cout<<"         --------------------\n\n";
			cout<<"  => Congrate! Now your money is: "<<money+bet<<endl;
			money+=bet;
 		}
		else if(user_guess !=Dice && user_guess>0 && user_guess<=6 )
		{
			cout<<"         --------------------\n";
			cout<<"         |     You lose.     |\n";
			cout<<"         --------------------\n\n";
			cout<<"  => Your balance remain: "<<money-bet<<endl;
			money-=bet;
		}
		else 
		{
			cout<<"\n        ! Invalid number. !\n\n";
			cout<<"       ! Please try again. !\n\n";
		}
			cout<<"\n  => Your Current balance is: "<<money<<endl;
 				if(money==0)
 				{
 					cout<<"\n  => Sorry! You're not have enough money."<<endl;
 					cout<<"\n     ! Do you want to play more? !"<<endl;
 					cout<<"\n         >> Y << or >> N <<"<<endl;
 					cout<<"\n  => Please Input: ";
 					cin>>reply;
 					if(reply=='Y')
 					{
 						debt-=money_lend;
 						cout<<"\n  => You're Welcome, Now I lend You: "<<money_lend<<endl;
 						cout<<"\n  => Your debt is: "<<debt<<endl;
 						money+=money_lend;
					}
					if(reply=='N')
					{
						cout<<"        -----------------------\n";
						cout<<"        | FareWell My friend! |\n";
						cout<<"        -----------------------\n";
						break;
					}
				}
	}
 	return 0;
}