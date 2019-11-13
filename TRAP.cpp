#include<iostream>
#include<math.h>
using namespace std;

int main()
{
float i,delta_x;
float a=0,b=6.28319;
float n=0.01745;
float sum=0;
delta_x= (b-a)/n;
for(i=1;i<n;i++)
{
float x=a+i*delta_x;
sum=sum+sin(x);
}
float final_value=((sin(a)/2)+(sin(b)/2)+sum)*delta_x;
cout<<"Approximate value of integration of sin(x) is:"<<final_value;
return 0;
}
