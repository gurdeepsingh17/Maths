#include <iostream> //header file included to allow program to perform input and output operations in C++
#include <cmath>    //header file included to allow program to perform mathematical operations in C++
using namespace std; //cout defined inside std namespace
int main()           //main function begins
{
	float x=10,sum=1,term=1,temp=0;  // declaring variables x,sum,term,temp of float data type
	int i=0;  //declaring variable i as integer data type
	while(temp != sum) //while loop starts and will continue until the condition is satisfied
	{
		i++;   //incrementing i
		term=term*x/i;
		temp=sum;
		sum=sum+term;
		cout<<" "<<i<<"   "<<term<<"     "<<sum<<endl;  //output is displayed to user
	}
	cout<<" exact value="<<exp((double)x);  //displaying the exact value to user
	return 0;  //main function is of integer type so return 0 is used
} //end of main function
//end of C++ program
