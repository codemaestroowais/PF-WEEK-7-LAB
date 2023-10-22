#include<iostream>
using namespace std;
int digitSum(int digit);
main()
{
    int digit;
    cout<<"Enter a number: ";
    cin>>digit;
    cout<<"Sum of digits: "<<digitSum(digit);
}
int digitSum(int digit)
{
    int total=0;
    int n;
    while(digit>0)
    {
        n=digit%10;
        total=n+total;
        digit=digit/10;
    }
    return total;
}