#include<iostream>
#include<cmath>
using namespace std;
float calculateofsquare (float r)
{
	float square;
	square =3.14*pow(r,3)*3/4;
	return (square);
}
int main()
{
	float r;
	cout<<"Please enter the value of r: ";
	cin>>r;
	float square;
	//here is calling function above to add the values.
	square = calculateofsquare (r);
	cout<<"\nIf r = "<<r<<", Therefore square = "<<square<<endl;
	return 0;
}
