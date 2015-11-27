

/* A C++ program that recieves 2 integer values from user
 and compute the Addition, subtraction, multiplication,
qoutient and remainder of the values */

#include <iostream> // C++ io preprocessor library
using namespace std; //C++ standard directory

int addition (int i, int  j); //function declarations
int multiplication (int  i, int j);
int subtraction (int i, int j);
int division (int i, int j);
int remainder (int i, int j);

int main () // begins all c++ program
{
	int result , i, j; // variable declaration
	cout << " ENTER TWO INTEGER: "<<endl; 
	cin >>i >> j; // Prompts user for integer
	
	result =addition (i, j); 
result = multiplication (i, j); // function arguement
result = subtraction (i, j);
result = division (i, j);
result = remainder (i, j); 
}

 int addition (int i, int j)
{
	int r;
	r= i + j;
	cout << "\n ADDITION = "<<r<<endl;
	return r;
}

int multiplication (int i, int j)
{
	int r;
r= i * j;
	cout << "\n MULTIPLICATION = "<<r<<endl; // statement display result
	return r;	
}

int subtraction (int i, int j) // local function declaration
{
	int r;
	r= i - j;
	cout << "\n SUBTRACTION = "<<r<<endl;
	return r;
}

int division (int i, int j)
{	int r;
	r= i / j; // Arithemetic expression
	cout << "\n DIVISION = "<<r<<endl;
	return r;	
}

int remainder (int i, int j) 
{
	int r;
r= i % j;
	cout << "\n REMAINDER = "<<r<<endl;
	return r;	 // Program returns r and terminates as success
}

