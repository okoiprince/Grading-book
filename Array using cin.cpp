 
// NAME: Okoi Prince Francis 
// Department of Computer Science
// MATRIC NO.: 14/095244082

// A c++ program to display an array of size N by N

#include<iostream> // using the standard preprocessor libraries
#include<string>
#include <conio.h>
#include<iomanip>
using namespace std; // tells the compiler to use the Standard library directive

int main () // standard c++ function that begins all c++ program
{
int list [3][3]; // Array declaration of size 3 BY 3 

cout << " \n  Enter array values and press enter\\---------> \a\a\a"<<endl; 
// Displays a well understood message to the user to Enter values

{		
 for ( int i = 0; i < 3; ++i )  // looping the input values for row
	
 for ( int j = 0; j < 3; ++j ) // looping the input values for column

	cin >> list[i][j]; // prompt user to input the array values
}

	cout<< "\n\n YOUR ARRAY CONTENTS ARE.........\n"<<endl; 
	// compiler initiates this display to the user

	cout<<"  " << "LOCATION"<< setw(20) <<"ELEMENTS \n\a\a\a\a\a"<<endl; 
{
 for ( int i = 0; i < 3; ++i ) // looping the values for the row to the user for display
 
{
	for ( int j = 0; j < 3; ++j ) 
	// looping operation to process values for the column to the user

	cout<<"  " << i << setw(8) << list[i][j]<<"     "; 
	// displays the Array Elements and its Locations to the user interface
	cout<<"\n";
}
   cout<< "\n This is an array of 3 row and 3 columns, showing their location."<< endl; 
// Displays a summarise explanation to the user

 return 0; // compiler terminates and returns a value 0 i.e EXIT_SUCCESS
}
}
/* 
Tags used in the code to add more style e.g:
\a = beep sound
\t = tab
\n = next line
*/

