#include <iostream> //header file to include input & output stream
#include <math.h>  //math header file from library is included
#include <iomanip> ////manipulators header file include
using namespace std;  ////using standard library namespace
int main() //main function
{
	float x= 10.5; //float type variable x is declared and initialized
	float factorial=1; //float type variable factorial is declared
	float trunc_error,rf; //
	float a=0; // a is initialized to 10
	int j=0, i=0; //i and j is initialized to zero
	for(j=0;j<=16;j++) //for loop to find factorial of number
	{
		factorial=factorial*(1+j); //factorial is calculated
	}
	while(i<=16) //while loop will execute for i<=16 to calculate rf
	{
		i++; // increment i by 1

		rf=(exp(10.5)*pow((x-a),(i+1))); //rf is calculated used further to calculate truncation error

	}
	trunc_error=(rf/factorial); //truncation error is calculated
	cout<<"Term number: "<<i<<endl; //display term number
	cout<<"Truncation error is :"<< trunc_error; //display Truncation error
	}
