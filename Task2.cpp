#include<iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
    int length;
    cout<<"Enter the length of the Fibonacci series: ";
    cin>>length;
    generateFibonacci(length);
}
void generateFibonacci(int length)
{
    int n1=0;
    int n2=1;
    int sum=0;
    if(length==1)
    {
        cout<<n1;
    }
    if(length==2)
    {
        cout<<n1<<", "<<n2;
    }
    if(length>2)
    {
        cout<<n1<<", "<<n2;
    }
    for(int series=0; series<(length-2); series=series+1)
    {
        sum=n1+n2;
        cout<<", "<<sum;
        n1=n2;
        n2=sum;
    }
}