
// Simple C++ program to compute the sum of 3 fractions and display result

#include <iostream> // standard preprocessor library
using namespace std; // c++ standard directive

int main () // begins all c++ program
{
// Declaration of variables
	double num1, num2, num3, denum1, denum2, denum3;
	float sum;
	{
	
	cout << " 1st FRACTION...... ENTER ANY INTEGER: \n\n";
	cin >> num1 >> denum1;  // prompts user to input value
	cout <<num1<<"/"<<denum1<<"= " <<num1/denum1;

	cout << "\n 2nd FRACTION...... ENTER ANY INTEGER: \n\n";
	cin >> num2 >> denum2;
	cout <<num2<<"/"<<denum2<<"= " << num2/denum2;//display fraction

	
	cout << "\n 3rd FRACTION...... ENTER ANY INTEGER: \n\n";
	cin >> num3 >> denum3;  
	cout <<num3<<"/"<<denum3<<"= " << num3/denum3;
 }
	
{
double numerator, denominator; //variable declaration

//Arithemetic operation to find lcm.
	numerator= (num1*denum2*denum3)+(num2*denum1*denum3)+(num3*denum1*denum2);
	
	denominator= (denum1 * denum2 *denum3);
	
	sum= (numerator/ denominator); //final summation of all the fraction
	
	cout << "\n SUMMATION OF FRACTIONS  IS .........\n";
	//display the summation of all the fraction
	cout<<num1<<"/"<<denum1<<" + "<<num2<<"/"<<denum2<<" + "<<num3<<"/"<<denum3<<" = " << sum;
}
	return 0; // program return 0 exit_success
}

