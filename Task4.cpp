#include<iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
    int number, digit;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter the digit to check: ";
    cin>>digit;
    cout<<"Frequency: "<<frequencyChecker(number, digit);
}
int frequencyChecker(int number, int digit)
{
    int repitition=0;
    while(number>0)
    {
        int number1=number%10;
        if(number1==digit)
        {
            ++repitition;
        }
        number=number/10;

    }
        return repitition;

}