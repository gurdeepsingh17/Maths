#include<iostream> //header file included to allow program to perform input and output

using namespace std; //cout defined inside std namespace

int main()  //main function begins
{
	float epsilon;  //declaring epsilon as float data type
	epsilon = 1;  //initializing the value to 1
	while(1+epsilon>1)  // continue until the condition is satisfied
	epsilon=epsilon/2;  // dividing epsilon by 2
	epsilon=epsilon*2;  //multiplying epsilon by 2
	cout<<"Machine epsilon is : "<<epsilon;  //output is displayed to the user
	return 0;  // main function is of integer type so return 0 is used
} 

