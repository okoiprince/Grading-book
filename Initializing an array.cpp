#include<iostream>
#include<string>
#include <conio.h>
#include<iomanip>

using namespace std;

int main ()

{
	int i,j;
	
int list [][2]={{2,3,},{4,5}};

{	
	
cout << "\n\n______________________________________________________________________________"<<endl;	
	string name;
	cout << " ENTER YOUR NAME: "<<endl;
	cin >>name;

	cout << "\n\n_____________________________________________________________________________"<<endl;
	
	cout<< "\a\a\a\a\a\a\a\n\n HELLO " << name<<endl;
}
	cout<< "\n\n YOUR ARRAY CONTENTS ARE........."<<endl;
	
	cout<<"  " << "LOCATION"<< setw(20) <<"ELEMENTS \a\a\a\a\a"<<endl;
{
	
	for ( int i = 0; i < 2; ++i )


	for ( int j = 0; j < 2; ++j )


	cout<<"  " << i<< setw(8) << list[i][j];
	
	cout<<"\n";
	return 0;
}
}
