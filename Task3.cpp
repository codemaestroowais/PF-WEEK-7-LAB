#include<iostream>
using namespace std;
int totalDigits(int number);
main()
{
    int digits;
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    digits=totalDigits(number);
    cout<<"Total number of digits: "<<digits;
}
int totalDigits(int number)
{
    int n1=0;
    while(number/10.0!=0)
    {
        n1=n1+1;
        number=number/10;
    }
    return n1;
}