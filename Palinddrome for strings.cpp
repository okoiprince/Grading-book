
// NAME: OKA GODSWILL IFERI
// MATRIC NO.: 14/095144036
// DEPT.: MATHEMATICS


// A c++ program  that decides if a given char array is a palinddrome

#include <iostream> // the Preprocessor directive
#include <iomanip>
#include <string>

using namespace std;  // c++ standard directive

int main ()
//  begins all c++ program
{
string word; // variable declaration

cout<< " ENTER A STRING: ";
cin >> word; // prompt user to input value

cout << "\n\n\n"; 
int i, j, n=word.size(), c=0; // variables or data declaration

for (i=0, j=n-1; i< j; i++, j--) //looping the size of the array

{
	if (word[i] !=word[j]) // comparing two array of size i and j
	{
		c=0; // Relation statement to compare when c= 0 i.e True
		break; // program terminates when c=0
	}
	else
	{
		c=1; // Assignment Expression when c=1 i.e false
	}	
}
if (c) // if statement compare if the string is palinddrome
cout<<"["<< word<<"]" << "......String is Palinddrome"; //
else
cout<<"["<< word<<"]" << "......String is not Palinddrome";

cout <<"\n\n"; // compiler skips double lines

return 0;  // program terminates

}
