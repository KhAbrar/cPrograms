#include<iostream>
using namespace std;
int main()
{
	int diviser,divided,quotient,remainder;
	cout<<"enter divided";
	cin>>divided;
	cout<<"diviser";
	cin>>diviser;
	quotient = divided/diviser;
	remainder = divided%diviser;
	cout<<"Quotient"<<"="<<quotient;
	cout<<"Remander"<<"="<<remainder;
	return 0;
}
