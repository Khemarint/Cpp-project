#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	cout<<"    ________________________"<<endl;
	cout<<"   |   Guess number Game    |"<<endl;
	cout<<"    ------------------------"<<endl;
	srand(time(0));
	int number= rand()%100+1;
	int guess;
	int count=0;
		while(true)
		{
			count++;
			cout<<"PLease Input number: ";
			cin>>guess;
			
					if(guess>number)
					{
						cout<<"It's big\n";
					}
					else if(guess<number)
					{
						cout<<"It's small\n";
					}
						else if(guess==number)
					{
						cout<<"         -------------\n";
						cout<<"        |   You win   |\n";
						cout<<"         -------------";
						break;
					}
					if(count==10)
					{
						cout<<"         -------------\n";
						cout<<"        |   You lose  |\n";
						cout<<"         -------------";
						break;
					}
		}
return 0;
}