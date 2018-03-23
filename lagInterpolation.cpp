#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	//Variables declaration
	double Xi[10], Fi[10], X;
		double Li=1, resultfx;
		int i, j, k, n;
		
		//prompts for degree of polynomial
	cout<<"Enter Degree of Polinomial: "; 
			cin>>n;
			
			k=n+1; //increament the degree of the polynomial by 1
			
			/*Prompts for all values of Xi, where i=1,2,...k*/
			cout<<"\nEnter Values of Xi from Table: \n";
			for(i=0; i<k; i++)
			{
				cin>>Xi[i];
			}
			
			/*prompts for values of Fi(x), where i=1, 2, ...k*/
			cout<<"\nEnter Values of Fi from Table: \n";
			for(i=0; i<k; i++)
			{
				cin>>Fi[i];
			}
			
			/*prompts for the test value of X */
			cout <<"\nEnter value of X: ";
			cin >>X;
			
			cout<<endl;
			/*computes Li(x), where i=1,2,...k-1*/
			for(i=0;i<=k-1;i++) 
			{ 
				Li=1; 
				for(j=0;j<=k-1;j++) 
				{ 
					if(j!=i) 
					{
						Li*=(X-Xi[j])/(Xi[i]-Xi[j]);
						
					}
					//Displays the interpolated values of 0 to k
					cout<<"L"<<i<<"(X)" <<Li<<"\n"; 
				} 
					resultfx += (Li*Fi[i]); 
			}
			
			//Displays the interpolated exact value for Summation(Li(x)Fi)
				printf("\n\n f(%.1f) = %f ",X,resultfx); 

			return 0; 
}
