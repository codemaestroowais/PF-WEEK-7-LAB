#include<iostream>
using namespace std;
int calculation(int age, int washingmachineprice, int day);
main()
{
    int age, washingmachineprice, day;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter the price of the washing machine: ";
    cin>>washingmachineprice;
    cout<<"Enter the unit price of each day: ";
    cin>>day;
    cout<<calculation(age, washingmachineprice, day);
}
int calculation(int age, int washingmachineprice, int day)
{
    int n1=10;
    int sum=0;
    int even=age/2;
    for(int n=10; n<=even; n=n+10)
    {
        sum=sum+n;
    }
    sum=sum-even;
    int odd=(age+1)/2;
    int oddMoney=odd*day;
    int money=oddMoney+even;
    int diff=money-washingmachineprice;
    if(money>washingmachineprice)
    {
        cout<<"Yes!"<<endl;
        cout<<diff;
    }
    if(money<washingmachineprice)
    {
        cout<<"No!"<<endl;
        cout<<-1*diff;
    }
    cout<<even;
    return diff;
}