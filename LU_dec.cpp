/*
 * LU_dec.cpp
 *
 *  Created on: Oct 21, 2019
 *      Author: ramneet
 */
#include<iostream>
using namespace std;

int main()
{
    int n,i,k,j,p;
    float a[3][3],l[3][3]={0},u[3][3]={0},sum,b[3],y[3]={0},x[3]={0};
    cout<<"Enter the order of matrix"<<endl;
    cin>>n;
    cout<<"Enter elements of matrix a ...ROW wise :"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"R"<<i<<"  ";
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    }
    cout<<"Enter elements of b matrix...in ROW"<<endl;
    for(i=1;i<=n;i++)
        cin>>b[i];
    //LU decomposition //
    for(k=1;k<=n;k++)
    {
        u[k][k]=1;
        for(i=k;i<=n;i++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[i][p]*u[p][k];
            l[i][k]=a[i][k]-sum;
        }
        for(j=k+1;j<=n;j++)
        {
            sum=0;
            for(p=1;p<=k-1;p++)
                sum+=l[k][p]*u[p][j];
            u[k][j]=(a[k][j]-sum)/l[k][k];
        }
    }
    // Displaying LU matrix//
    cout<<endl<<endl<<"Displaying Lower and Upper Matrix : LU = "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<l[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<u[i][j]<<"  ";
        cout<<endl;
    }
    // FINDING Y; LY=b//
    for(i=1;i<=n;i++)
    {                                        //forward subtitution method
        sum=0;
        for(p=1;p<i;p++)
        sum+=l[i][p]*y[p];
        y[i]=(b[i]-sum)/l[i][i];
    }
    //FINDING X; UX=Y//
    for(i=n;i>0;i--)
    {
        sum=0;
        for(p=n;p>i;p--)
            sum+=u[i][p]*x[p];
        x[i]=(y[i]-sum)/u[i][i];
    }
    // DISPLAYING SOLUTION//
    cout<<endl<<"Resultant Matrix is"<<endl;
    for(i=1;i<=n;i++)
        cout<<endl<<x[i];

    return 0;
}


