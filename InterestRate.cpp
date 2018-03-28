#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	/*QUESTION 
		Write a c++ program that is capable of computing 
	 the amount of interest that is earned on an investment over a period 
	 of 10years. The initial amount of the investment and the interest rate 
	 are input by the user. Output the value of the investment at the end of 
	 each year.
	 the program should be capable of accepting any set of input */
	 
	float amount, time=1;
	float interest[10];
	
	float valueCost;
	
	float sumTotal;
	
	cout<<"ENTER AMOUNT: "<<endl;
	cin>>amount;
	
	cout<<"\nENTER INTEREST RATE FOR EACH YEAR: "<<endl;
	for(int i=1; i<=10; i++)
	{
		cout<<"YEAR"<<i<<": ";
		cin>>interest[i];
		
	}
	
	cout<<"\n\nYEAR GAIN: \n"<<endl;
	for(int i=1; i<=10; i++)
	{
		cout<<"\nYEAR"<<i<<": ";
		valueCost = amount *interest[i] * time;
		
		float total=valueCost/100;
		
		cout<<total<<endl;
		
		sumTotal =sumTotal + total;

	}
	
		cout<<"\n\nTOTAL IN 10 YEARS: "<<sumTotal<<endl;
	
		
	
	return 0; //TERMINATS HERE
	
}
