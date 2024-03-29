#include <iostream>
#include <math.h>
using namespace std;

// Function for calculating sin value
void cal_sin(float n)
{
    float accuracy = 0.0001, denominator, sinx, sinval;

    // Converting degrees to radian
    n = n * (3.142 / 180.0);

    float x1 = n;

    // maps the sum along the series
    sinx = n;

    // holds the actual value of sin(n)
    sinval = sin(n);
    int i = 1;
    do
    {
        denominator = 2 * i * (2 * i + 1);
        x1 = -x1 * n * n / denominator;
        sinx = sinx + x1;
        i = i + 1;
    }
    while (accuracy <= fabs(sinval - sinx));
    cout << "Approximate value of derivate of sinx at 45 degree is :"<<sinx;
    cout <<"\n True value of derivative of sin x at 45 degree is: "<< sinval;
}

// Main function
int main()
{
    float n = 45;
    cal_sin(n);
    return 0;
}
