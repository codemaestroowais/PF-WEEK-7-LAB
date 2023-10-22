#include<iostream>
using namespace std;
int calculateGCD(int n1, int n2);
int calculateLCM(int n1, int n2);
main()
{
    int n1, n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"GCD: "<<calculateGCD(n1, n2)<<endl;
    cout<<"LCM: "<<calculateLCM(n1, n2)<<endl;
}
int calculateGCD(int n1, int n2)
{
    while(n2!=0)
    {
        int gcd;
        gcd=n2;
        n2=n1%n2;
        n1=gcd;
    }
    return n1;
}
int calculateLCM(int n1, int n2)
{
    int lcm;
    lcm=(n1*n2)/calculateGCD(n1, n2);
    return lcm;
}